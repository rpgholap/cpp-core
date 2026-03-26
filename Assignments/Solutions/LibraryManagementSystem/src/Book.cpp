#include "../headers/Book.h"

namespace LibrarySystem {

Book::Book() : bookId(0), title(""), author(""), isbn(""), 
               status(BookStatus::AVAILABLE), genre(BookGenre::OTHER), 
               quantity(0), availableCopies(0) {}

Book::Book(int id, const std::string& title, const std::string& author, const std::string& isbn, 
           BookGenre genre, int quantity)
    : bookId(id), title(title), author(author), isbn(isbn), genre(genre), 
      quantity(quantity), availableCopies(quantity) {
    status = (availableCopies > 0) ? BookStatus::AVAILABLE : BookStatus::ISSUED;
}

int Book::getBookId() const { return bookId; }
int Book::getId() const { return bookId; }
std::string Book::getTitle() const { return title; }
std::string Book::getName() const { return title; }
std::string Book::getAuthor() const { return author; }
std::string Book::getIsbn() const { return isbn; }
BookStatus Book::getStatus() const { return status; }
BookGenre Book::getGenre() const { return genre; }
int Book::getQuantity() const { return quantity; }
int Book::getAvailableCopies() const { return availableCopies; }

void Book::setStatus(BookStatus st) { status = st; }
void Book::setAvailableCopies(int copies) { 
    availableCopies = copies; 
    status = (availableCopies > 0) ? BookStatus::AVAILABLE : BookStatus::ISSUED;
}

Book& Book::operator++() {
    quantity++;
    availableCopies++;
    status = BookStatus::AVAILABLE;
    return *this;
}

Book Book::operator++(int) {
    Book temp = *this;
    ++(*this);
    return temp;
}

Book& Book::operator--() {
    if (availableCopies > 0) {
        availableCopies--;
        if (availableCopies == 0) status = BookStatus::ISSUED;
    }
    return *this;
}

bool Book::operator==(const Book& other) const {
    return this->bookId == other.bookId;
}

bool Book::operator<(const Book& other) const {
    return this->bookId < other.bookId;
}

std::string Book::operator[](int index) const {
    switch(index) {
        case 0: return std::to_string(bookId);
        case 1: return title;
        case 2: return author;
        case 3: return isbn;
        case 4: return std::to_string(static_cast<int>(status));
        case 5: return std::to_string(quantity);
        case 6: return std::to_string(availableCopies);
        default: return "Invalid Index";
    }
}

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << book.bookId << "|" << book.title << "|" << book.author << "|" 
       << book.isbn << "|" << static_cast<int>(book.status) << "|" 
       << static_cast<int>(book.genre) << "|" << book.quantity << "|" 
       << book.availableCopies;
    return os;
}

std::istream& operator>>(std::istream& is, Book& book) {
    std::string dummy;
    if (!std::getline(is, dummy, '|')) return is;
    book.bookId = std::stoi(dummy);
    
    std::getline(is, book.title, '|');
    std::getline(is, book.author, '|');
    std::getline(is, book.isbn, '|');
    
    std::getline(is, dummy, '|');
    book.status = static_cast<BookStatus>(std::stoi(dummy));
    
    std::getline(is, dummy, '|');
    book.genre = static_cast<BookGenre>(std::stoi(dummy));
    
    std::getline(is, dummy, '|');
    book.quantity = std::stoi(dummy);
    
    std::getline(is, dummy); // end of line
    book.availableCopies = std::stoi(dummy);
    
    return is;
}

}
