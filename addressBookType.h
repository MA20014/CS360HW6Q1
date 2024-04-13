#ifndef ADDRESS_BOOK_TYPE_H
#define ADDRESS_BOOK_TYPE_H

#include <vector>
#include <algorithm>
#include <iostream>
#include "personType.h"
#include "extPersonType.h"

class addressBookType {
public:
    addressBookType(); // Constructor
    void loadFromDisk(); // Load data from disk
    void sortByLastName(); // Sort by last name
    void searchLastName(const std::string& lastName); // Search by last name
    void printDetailsByName(const std::string& firstName, const std::string& lastName); // Print details by name
    void printBirthdaysInMonth(int month); // Print birthdays in a given month
    void printNamesBetweenLastNames(const std::string& lastName1, const std::string& lastName2); // Print names between two last names
    void printByRelation(const std::string& relation); // Print by relation (family, friend, business associate)
    void addPerson(const extPersonType& person); // Add person to address book

private:
    std::vector<extPersonType> addressBook;
};

#endif /* ADDRESS_BOOK_TYPE_H */
