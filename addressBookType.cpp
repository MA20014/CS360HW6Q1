#include "addressBookType.h"
#include <iostream>
using namespace std;

addressBookType::addressBookType() {
    // Initialize address book
}

void addressBookType::loadFromDisk() {
    // Load data from disk
}

void addressBookType::sortByLastName() {
    // Sort by last name
    sort(addressBook.begin(), addressBook.end(), [](const extPersonType& a, const extPersonType& b) {
        return a.getLastName() < b.getLastName();
    });
}

void addressBookType::searchLastName(const std::string& lastName) {
    // Convert the input lastName to lowercase
    string searchName = lastName;
    transform(searchName.begin(), searchName.end(), searchName.begin(), ::tolower);

    // Search by last name (case-insensitive)
    bool found = false;
    for (const auto& person : addressBook) {
        string storedLastName = person.getLastName();
        // Convert the stored last name to lowercase
        transform(storedLastName.begin(), storedLastName.end(), storedLastName.begin(), ::tolower);
        if (storedLastName == searchName) {
            person.printDetails();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Person with last name " << lastName << " not found." << endl;
    }
}

void addressBookType::printDetailsByName(const string& firstName, const string& lastName) {
    // Convert the input names to lowercase
    string searchFirstName = firstName;
    string searchLastName = lastName;
    transform(searchFirstName.begin(), searchFirstName.end(), searchFirstName.begin(), ::tolower);
    transform(searchLastName.begin(), searchLastName.end(), searchLastName.begin(), ::tolower);

    // Print details by name (case-insensitive)
    bool found = false;
    for (const auto& person : addressBook) {
        string storedFirstName = person.getFirstName();
        string storedLastName = person.getLastName();
        // Convert the stored names to lowercase
        transform(storedFirstName.begin(), storedFirstName.end(), storedFirstName.begin(), ::tolower);
        transform(storedLastName.begin(), storedLastName.end(), storedLastName.begin(), ::tolower);
        if (storedFirstName == searchFirstName && storedLastName == searchLastName) {
            person.printDetails();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Person with name " << firstName << " " << lastName << " not found." << endl;
    }
}

void addressBookType::printBirthdaysInMonth(int month) {
    // Print birthdays in a given month
    for (const auto& person : addressBook) {
        if (person.getBirthMonth() == month) {
            person.printDetails();
        }
    }
}

void addressBookType::printNamesBetweenLastNames(const string& lastName1, const string& lastName2) {
    // Print names between two last names
    bool print = false;
    for (const auto& person : addressBook) {
        if (person.getLastName() == lastName1) {
            print = true;
        }
        if (print) {
            person.print();
            cout << endl;
        }
        if (person.getLastName() == lastName2) {
            break;
        }
    }
}

void addressBookType::printByRelation(const string& relation) {
    // Convert the input relation to lowercase
    string searchRelation = relation;
    transform(searchRelation.begin(), searchRelation.end(), searchRelation.begin(), ::tolower);
  
    // Print by relation (case-insensitive)
    bool found = false;
    for (const auto& person : addressBook) {
        string storedRelation = person.getRelationship();
        // Convert the stored relation to lowercase
        transform(storedRelation.begin(), storedRelation.end(), storedRelation.begin(), ::tolower);
        if (storedRelation == searchRelation) {
            person.printDetails();
            found = true;
        }
    }
    if (!found) {
        cout << "No persons with relationship " << relation << " found." << endl;
    }
}

void addressBookType::addPerson(const extPersonType& person) {
    // Add person to address book
    addressBook.push_back(person);
}
