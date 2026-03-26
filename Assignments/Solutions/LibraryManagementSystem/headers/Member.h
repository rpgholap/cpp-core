#ifndef MEMBER_H
#define MEMBER_H

#include "Person.h"
#include <iostream>

namespace LibrarySystem {

class Member : public Person {
private:
    int numBooksIssued;
    int* issuedBookIds; // Dynamic memory representation of issued books
    int capacity;

    void resizeBookArray();

public:
    Member();
    Member(int id, const std::string& name, const std::string& phone);
    
    // Rule of Three
    Member(const Member& other);
    ~Member() override;
    Member& operator=(const Member& other);

    void displayInfo() const override;

    bool issueBook(int bookId);
    bool returnBook(int bookId);

    int getNumBooksIssued() const;
    int* getIssuedBookIds() const; // Care should be taken using this raw pointer

    // Operator overloading
    bool operator==(const Member& other) const;
    friend std::ostream& operator<<(std::ostream& os, const Member& member);
    friend std::istream& operator>>(std::istream& is, Member& member);
};

}

#endif // MEMBER_H
