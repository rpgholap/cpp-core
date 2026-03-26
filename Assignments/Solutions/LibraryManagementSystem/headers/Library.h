#ifndef LIBRARY_H
#define LIBRARY_H

#include "Container.h"
#include "Book.h"
#include "Member.h"
#include "Transaction.h"
#include <vector>
#include <map>
#include <string>

namespace LibrarySystem {

class Library {
private:
    Container<Book> books;
    Container<Member> members;
    std::vector<Transaction> transactions;
    std::multimap<int, int> bookToMemberMap; // allows multiple members per bookId if copies > 1

    const std::string dataDir = "e:/AUG CDAC PREP 2025/CDAC/CPP/Assignments/Solutions/Project_Assignment_Final/LibraryManagementSystem/data/";

public:
    Library();

    void addBook(const Book& book);
    void removeBook(int bookId);
    Book* searchBook(int bookId);
    Book* searchBook(const std::string& title);
    void displayAllBooks() const;

    void registerMember(const Member& member);
    void removeMember(int memberId);
    Member* searchMember(int memberId);
    Member* searchMember(const std::string& name);
    void displayAllMembers() const;

    void issueBook(int memberId, int bookId);
    void returnBook(int memberId, int bookId);
    void viewOverdueBooks() const;

    void saveData() const;
    void loadData();
};

}

#endif // LIBRARY_H
