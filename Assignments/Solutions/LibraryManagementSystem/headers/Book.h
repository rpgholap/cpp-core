#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>
#include "Enums.h"

namespace LibrarySystem {

class Book {
private:
    int bookId;
    std::string title;
    std::string author;
    std::string isbn;
    BookStatus status;
    BookGenre genre;
    int quantity;
    int availableCopies;

public:
    Book();
    Book(int id, const std::string& title, const std::string& author, const std::string& isbn, 
         BookGenre genre, int quantity);

    // Getters and Setters
    int getBookId() const;
    int getId() const; // For Generic Container compatibility
    std::string getTitle() const;
    std::string getName() const; // For Generic Container compatibility
    std::string getAuthor() const;
    std::string getIsbn() const;
    BookStatus getStatus() const;
    BookGenre getGenre() const;
    int getQuantity() const;
    int getAvailableCopies() const;

    void setStatus(BookStatus st);
    void setAvailableCopies(int copies);

    // Operator overloading
    Book& operator++();    // Pre-increment
    Book operator++(int);  // Post-increment
    Book& operator--();    // Pre-decrement
    
    bool operator==(const Book& other) const;
    bool operator<(const Book& other) const;
    
    std::string operator[](int index) const;

    friend std::ostream& operator<<(std::ostream& os, const Book& book);
    friend std::istream& operator>>(std::istream& is, Book& book);
};

}

#endif // BOOK_H
