#include <iostream>
#include <limits>
#include "../headers/Library.h"
#include "../headers/Exceptions.h"

using namespace LibrarySystem;

void displayMenu() {
    std::cout << "\n===== Library Management System =====\n";
    std::cout << "1. Add New Book\n";
    std::cout << "2. Remove Book\n";
    std::cout << "3. Search Book\n";
    std::cout << "4. Display All Books\n";
    std::cout << "5. Register Member\n";
    std::cout << "6. Remove Member\n";
    std::cout << "7. Search Member\n";
    std::cout << "8. Display All Members\n";
    std::cout << "9. Issue Book\n";
    std::cout << "10. Return Book\n";
    std::cout << "11. View Overdue Books\n";
    std::cout << "12. Save Data\n";
    std::cout << "13. Load Data\n";
    std::cout << "0. Exit\n";
    std::cout << "=====================================\n";
    std::cout << "Select an option: ";
}

void clearInput() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
    Library lib;
    
    // Attempt auto-load on start
    try {
        lib.loadData();
    } catch (...) {
        std::cout << "No previous data found or error loading data. Starting fresh.\n";
    }

    int choice;
    do {
        displayMenu();
        if (!(std::cin >> choice)) {
            clearInput();
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }
        
        try {
            switch(choice) {
                case 1: {
                    int id, qty, genreInput;
                    std::string title, author, isbn;
                    
                    std::cout << "Enter Book ID: "; std::cin >> id; clearInput();
                    std::cout << "Enter Title: "; std::getline(std::cin, title);
                    std::cout << "Enter Author: "; std::getline(std::cin, author);
                    std::cout << "Enter ISBN: "; std::getline(std::cin, isbn);
                    std::cout << "Enter Genre (0:Fiction, 1:Non-Fiction, 2:Sci-Fi, 3:Tech, 4:Mystery, 5:Programming, 6:Other): "; 
                    std::cin >> genreInput;
                    std::cout << "Enter Quantity: "; std::cin >> qty;
                    
                    Book b(id, title, author, isbn, static_cast<BookGenre>(genreInput), qty);
                    lib.addBook(b);
                    std::cout << "Book added successfully!\n";
                    break;
                }
                case 2: {
                    int id;
                    std::cout << "Enter Book ID to remove: "; std::cin >> id;
                    lib.removeBook(id);
                    std::cout << "Book removed successfully!\n";
                    break;
                }
                case 3: {
                    int type;
                    std::cout << "Search by (1) ID or (2) Title: "; std::cin >> type; clearInput();
                    if (type == 1) {
                        int id;
                        std::cout << "Enter ID: "; std::cin >> id;
                        Book* b = lib.searchBook(id);
                        std::cout << "Found Book: " << b->getTitle() << " by " << b->getAuthor() << "\n";
                    } else if (type == 2) {
                        std::string title;
                        std::cout << "Enter Title: "; std::getline(std::cin, title);
                        Book* b = lib.searchBook(title);
                        std::cout << "Found Book: " << b->getTitle() << " by " << b->getAuthor() << "\n";
                    } else {
                        std::cout << "Invalid search type.\n";
                    }
                    break;
                }
                case 4:
                    lib.displayAllBooks();
                    break;
                case 5: {
                    int id;
                    std::string name, phone;
                    std::cout << "Enter Member ID: "; std::cin >> id; clearInput();
                    std::cout << "Enter Name: "; std::getline(std::cin, name);
                    std::cout << "Enter Phone: "; std::getline(std::cin, phone);
                    
                    Member m(id, name, phone);
                    lib.registerMember(m);
                    std::cout << "Member registered successfully!\n";
                    break;
                }
                case 6: {
                    int id;
                    std::cout << "Enter Member ID to remove: "; std::cin >> id;
                    lib.removeMember(id);
                    std::cout << "Member removed successfully!\n";
                    break;
                }
                case 7: {
                    int type;
                    std::cout << "Search by (1) ID or (2) Name: "; std::cin >> type; clearInput();
                    if (type == 1) {
                        int id;
                        std::cout << "Enter ID: "; std::cin >> id;
                        Member* m = lib.searchMember(id);
                        m->displayInfo();
                    } else if (type == 2) {
                        std::string name;
                        std::cout << "Enter Name: "; std::getline(std::cin, name);
                        Member* m = lib.searchMember(name);
                        m->displayInfo();
                    } else {
                        std::cout << "Invalid search type.\n";
                    }
                    break;
                }
                case 8:
                    lib.displayAllMembers();
                    break;
                case 9: {
                    int mId, bId;
                    std::cout << "Enter Member ID: "; std::cin >> mId;
                    std::cout << "Enter Book ID: "; std::cin >> bId;
                    lib.issueBook(mId, bId);
                    break;
                }
                case 10: {
                    int mId, bId;
                    std::cout << "Enter Member ID: "; std::cin >> mId;
                    std::cout << "Enter Book ID: "; std::cin >> bId;
                    lib.returnBook(mId, bId);
                    break;
                }
                case 11:
                    lib.viewOverdueBooks();
                    break;
                case 12:
                    lib.saveData();
                    break;
                case 13:
                    lib.loadData();
                    break;
                case 99: {
                    std::cout << "--- Polymorphism Test ---\n";
                    Person* p = new Member(999, "Test Member", "1234567890");
                    p->displayInfo(); // prints member info via base pointer
                    delete p;         // clean delete via virtual destructor
                    std::cout << "Test completed.\n";
                    break;
                }
                case 0:
                    std::cout << "Exiting system. Have a good day!\n";
                    break;
                default:
                    std::cout << "Invalid choice. Please try again.\n";
            }
        } 
        catch (const LibraryException& e) {
            std::cout << "\n[Library Error] " << e.what() << "\n";
        }
        catch (const std::exception& e) {
            std::cout << "\n[System Error] " << e.what() << "\n";
        }
        
    } while (choice != 0);

    return 0;
}
