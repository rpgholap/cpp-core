#include "../headers/Person.h"

namespace LibrarySystem {

Person::Person(int id, const std::string& name, const std::string& phone)
    : id(id), name(name), phone(phone) {}

Person::~Person() {
    // Virtual destructor implemented to fulfill cleanup when deleting via base pointer
}

int Person::getId() const { return id; }
std::string Person::getName() const { return name; }
std::string Person::getPhone() const { return phone; }

void Person::setId(int newId) { this->id = newId; }
void Person::setName(const std::string& newName) { this->name = newName; }
void Person::setPhone(const std::string& newPhone) { this->phone = newPhone; }

}
