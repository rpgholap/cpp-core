#include "../headers/Library.h"
#include "../headers/Exceptions.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>

namespace LibrarySystem {

Library::Library() {}

void Library::addBook(const Book& book) {
    Book* existing = books.find(book.getId());
    if (existing) {
        ++(*existing); // Increment copies if already exists
    } else {
        books.add(book);
    }
}

void Library::removeBook(int bookId) {
    for (int i = 0; i < books.getSize(); ++i) {
        if (books[i].getId() == bookId) {
            if (books[i].getQuantity() != books[i].getAvailableCopies()) {
                throw LibraryException("Cannot remove book entirely as some copies are issued.", __FUNCTION__, __LINE__);
            }
            books.remove(i);
            return;
        }
    }
    throw BookNotFoundException("Book with ID " + std::to_string(bookId) + " not found.", __FUNCTION__, __LINE__);
}

Book* Library::searchBook(int bookId) {
    Book* book = books.find(bookId);
    if (!book) throw BookNotFoundException("Book not found.", __FUNCTION__, __LINE__);
    return book;
}

Book* Library::searchBook(const std::string& title) {
    Book* book = books.find(title);
    if (!book) throw BookNotFoundException("Book not found.", __FUNCTION__, __LINE__);
    return book;
}

void Library::displayAllBooks() const {
    std::cout << "--- All Books ---\n";
    for (int i = 0; i < books.getSize(); ++i) {
        std::cout << books[i].getId() << " | " << books[i].getTitle() << " | " 
                  << books[i].getAuthor() << " | Copies: " << books[i].getAvailableCopies() 
                  << "/" << books[i].getQuantity() << "\n";
    }
}

void Library::registerMember(const Member& member) {
    Member* existing = members.find(member.getId());
    if (existing) throw LibraryException("Member ID already exists.", __FUNCTION__, __LINE__);
    members.add(member);
}

void Library::removeMember(int memberId) {
    for (int i = 0; i < members.getSize(); ++i) {
        if (members[i].getId() == memberId) {
            if (members[i].getNumBooksIssued() > 0) {
                throw LibraryException("Cannot remove member with issued books.", __FUNCTION__, __LINE__);
            }
            members.remove(i);
            return;
        }
    }
    throw MemberNotFoundException("Member not found.", __FUNCTION__, __LINE__);
}

Member* Library::searchMember(int memberId) {
    Member* member = members.find(memberId);
    if (!member) throw MemberNotFoundException("Member not found.", __FUNCTION__, __LINE__);
    return member;
}

Member* Library::searchMember(const std::string& name) {
    Member* member = members.find(name);
    if (!member) throw MemberNotFoundException("Member not found.", __FUNCTION__, __LINE__);
    return member;
}

void Library::displayAllMembers() const {
    std::cout << "--- All Members ---\n";
    for (int i = 0; i < members.getSize(); ++i) {
        members[i].displayInfo();
    }
}

void Library::issueBook(int memberId, int bookId) {
    Book* book = books.find(bookId);
    if (!book) throw BookNotFoundException("Book not found.", __FUNCTION__, __LINE__);
    
    Member* member = members.find(memberId);
    if (!member) throw MemberNotFoundException("Member not found.", __FUNCTION__, __LINE__);

    if (book->getAvailableCopies() <= 0) {
        throw BookNotAvailableException("No copies available.", __FUNCTION__, __LINE__);
    }

    if (member->getNumBooksIssued() >= 5) {
        throw MaxBooksExceededException("Member has reached max borrowing limit.", __FUNCTION__, __LINE__);
    }
    
    // Check if the member already issued this book
    for (int i = 0; i < member->getNumBooksIssued(); ++i) {
        if (member->getIssuedBookIds()[i] == bookId) {
            throw LibraryException("Member already has a copy of this book.", __FUNCTION__, __LINE__);
        }
    }

    --(*book); // Decrement available copies
    member->issueBook(bookId);
    bookToMemberMap.insert(std::make_pair(bookId, memberId));
    
    transactions.push_back(Transaction(memberId, bookId));
    std::cout << "Book issued successfully. Transaction ID: " << transactions.back().getTransactionId() << "\n";
}

void Library::returnBook(int memberId, int bookId) {
    Book* book = books.find(bookId);
    if (!book) throw BookNotFoundException("Book not found.", __FUNCTION__, __LINE__);
    
    Member* member = members.find(memberId);
    if (!member) throw MemberNotFoundException("Member not found.", __FUNCTION__, __LINE__);

    if (!member->returnBook(bookId)) {
        throw LibraryException("Member has not issued this book.", __FUNCTION__, __LINE__);
    }

    ++(*book); // Increment available copies

    // Update map
    auto range = bookToMemberMap.equal_range(bookId);
    for (auto it = range.first; it != range.second; ++it) {
        if (it->second == memberId) {
            bookToMemberMap.erase(it);
            break;
        }
    }

    // Complete transaction
    for (auto& t : transactions) {
        if (t.getBookId() == bookId && t.getMemberId() == memberId && t.getReturnDate() == 0) {
            t.returnBook();
            std::cout << "Book returned. Fine: $" << t.getFineAmount() << "\n";
            return;
        }
    }
}

void Library::viewOverdueBooks() const {
    std::cout << "--- Overdue Books ---\n";
    bool found = false;
    for (const auto& t : transactions) {
        if (t.getReturnDate() == 0) { // Not returned
            if (difftime(time(0), t.getDueDate()) > 0) {
                found = true;
                std::cout << "Member ID: " << t.getMemberId() 
                          << " | Book ID: " << t.getBookId() 
                          << " | Fine accrued: $" << t.calculateFine() << "\n";
            }
        }
    }
    if (!found) std::cout << "No overdue books currently.\n";
}

void Library::saveData() const {
    std::ofstream bfile(dataDir + "books.txt");
    for (int i = 0; i < books.getSize(); ++i) {
        bfile << books[i] << "\n";
    }
    bfile.close();

    std::ofstream mfile(dataDir + "members.txt");
    for (int i = 0; i < members.getSize(); ++i) {
        mfile << members[i] << "\n";
    }
    mfile.close();

    std::ofstream tfile(dataDir + "transactions.txt");
    for (const auto& t : transactions) {
        tfile << t.getTransactionId() << "|" << t.getMemberId() << "|" << t.getBookId() << "|"
              << t.getIssueDate() << "|" << t.getDueDate() << "|" << t.getReturnDate() << "|"
              << t.getFineAmount() << "\n";
    }
    tfile.close();
    std::cout << "Data saved successfully to " << dataDir << "\n";
}

void Library::loadData() {
    books.clear();
    members.clear();
    transactions.clear();
    bookToMemberMap.clear();

    std::ifstream bfile(dataDir + "books.txt");
    std::string line;
    while (std::getline(bfile, line)) {
        if(line.empty()) continue;
        Book b;
        std::istringstream iss(line);
        iss >> b;
        books.add(b);
    }
    bfile.close();

    std::ifstream mfile(dataDir + "members.txt");
    while (std::getline(mfile, line)) {
        if(line.empty()) continue;
        Member m;
        std::istringstream iss(line);
        iss >> m;
        members.add(m);
        // reconstruct map
        for (int i = 0; i < m.getNumBooksIssued(); ++i) {
            bookToMemberMap.insert(std::make_pair(m.getIssuedBookIds()[i], m.getId()));
        }
    }
    mfile.close();

    std::ifstream tfile(dataDir + "transactions.txt");
    int maxTid = 0;
    while (std::getline(tfile, line)) {
        if(line.empty()) continue;
        std::istringstream iss(line);
        std::string dummy;
        
        std::getline(iss, dummy, '|'); int tid = std::stoi(dummy);
        std::getline(iss, dummy, '|'); int mid = std::stoi(dummy);
        std::getline(iss, dummy, '|'); int bid = std::stoi(dummy);
        std::getline(iss, dummy, '|'); time_t issD = std::stoll(dummy);
        std::getline(iss, dummy, '|'); time_t dueD = std::stoll(dummy);
        std::getline(iss, dummy, '|'); time_t retD = std::stoll(dummy);
        std::getline(iss, dummy);      double fine = std::stod(dummy);
        
        Transaction t(tid, mid, bid, issD, dueD, retD, fine);
        transactions.push_back(t);
        if (tid > maxTid) maxTid = tid;
    }
    tfile.close();
    Transaction::setNextTransactionId(maxTid + 1);

    std::cout << "Data loaded successfully.\n";
}

}
