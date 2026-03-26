#include "../headers/Member.h"

namespace LibrarySystem {

Member::Member() 
    : Person(0, "", ""), numBooksIssued(0), capacity(5) {
    issuedBookIds = new int[capacity];
}

Member::Member(int id, const std::string& name, const std::string& phone)
    : Person(id, name, phone), numBooksIssued(0), capacity(5) {
    issuedBookIds = new int[capacity];
}

// Deep Copy constructor
Member::Member(const Member& other) : Person(other) {
    numBooksIssued = other.numBooksIssued;
    capacity = other.capacity;
    issuedBookIds = new int[capacity];
    for(int i = 0; i < numBooksIssued; ++i) {
        issuedBookIds[i] = other.issuedBookIds[i];
    }
}

Member::~Member() {
    delete[] issuedBookIds;
}

// Assignment Operator overload (deep copy)
Member& Member::operator=(const Member& other) {
    if (this != &other) {
        Person::operator=(other);
        delete[] issuedBookIds;
        
        numBooksIssued = other.numBooksIssued;
        capacity = other.capacity;
        issuedBookIds = new int[capacity];
        for(int i = 0; i < numBooksIssued; ++i) {
            issuedBookIds[i] = other.issuedBookIds[i];
        }
    }
    return *this;
}

void Member::resizeBookArray() {
    capacity *= 2;
    int* newArr = new int[capacity];
    for (int i = 0; i < numBooksIssued; ++i) {
        newArr[i] = issuedBookIds[i];
    }
    delete[] issuedBookIds;
    issuedBookIds = newArr;
}

void Member::displayInfo() const {
    std::cout << "[Member] ID: " << id 
              << " | Name: " << name 
              << " | Phone: " << phone 
              << " | Books Issued: " << numBooksIssued << "\n";
}

bool Member::issueBook(int bookId) {
    if (numBooksIssued >= capacity) {
        resizeBookArray();
    }
    issuedBookIds[numBooksIssued++] = bookId;
    return true;
}

bool Member::returnBook(int bookId) {
    for (int i = 0; i < numBooksIssued; ++i) {
        if (issuedBookIds[i] == bookId) {
            // Shift elements left to overwrite the removed book
            for (int j = i; j < numBooksIssued - 1; ++j) {
                issuedBookIds[j] = issuedBookIds[j + 1];
            }
            numBooksIssued--;
            return true;
        }
    }
    return false;
}

int Member::getNumBooksIssued() const {
    return numBooksIssued;
}

int* Member::getIssuedBookIds() const {
    return issuedBookIds;
}

bool Member::operator==(const Member& other) const {
    return this->id == other.id;
}

std::ostream& operator<<(std::ostream& os, const Member& member) {
    os << member.id << "|" << member.name << "|" << member.phone << "|" << member.numBooksIssued;
    for (int i = 0; i < member.numBooksIssued; ++i) {
        os << "|" << member.issuedBookIds[i];
    }
    return os;
}

std::istream& operator>>(std::istream& is, Member& member) {
    std::string dummy;
    if (!std::getline(is, dummy, '|')) return is;
    member.setId(std::stoi(dummy));
    
    std::getline(is, dummy, '|');
    member.setName(dummy);
    
    std::getline(is, dummy, '|');
    member.setPhone(dummy);
    
    std::getline(is, dummy, '|');
    int books = std::stoi(dummy);
    
    // clear existing books before reading
    while (member.getNumBooksIssued() > 0) {
        member.returnBook(member.getIssuedBookIds()[0]);
    }
    
    for (int i = 0; i < books; ++i) {
        if(i == books - 1) {
            std::getline(is, dummy); // end of line
        } else {
            std::getline(is, dummy, '|');
        }
        member.issueBook(std::stoi(dummy));
    }
    
    return is;
}

}
