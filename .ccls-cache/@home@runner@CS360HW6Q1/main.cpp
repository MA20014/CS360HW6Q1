#include <iostream>
#include <string>
#include "addressBookType.h"
#include "personType.h"
#include "extPersonType.h"
#include "dateType.h"
#include "addressType.h"
using namespace std;

int main() {
    addressBookType addressBook;

    int numEntries;
    cout << "Enter the number of entries: ";
    cin >> numEntries;

    // Sample data entry loop
    for (int i = 0; i < numEntries; ++i) {
        string firstName, lastName, phone, relation, street, city, state, zip;
        int month, day, year;

        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        cout << "Enter phone number: ";
        cin >> phone;
        cout << "Enter relationship (Family/Friend/Business Associate): ";
        cin >> relation;
        cout << "Enter birth date (mm dd yyyy): ";
        cin >> month >> day >> year;
        cout << "Enter address (Street City State ZIP): ";
        cin.ignore(); // Clear the newline character left in the buffer
        getline(cin, street); // Read the entire line for the street address
        cout << "Enter City: ";
        //cin >> city;
        getline(cin, city);
        cout << "Enter State: ";
        //cin >> state;
        getline(cin, state);
        cout << "Enter ZIP: ";
        cin >> zip;

        dateType dob(month, day, year);
        addressType addr(street, city, state, zip);
        extPersonType person(firstName, lastName, phone, relation);
        person.setDetails(phone, relation, dob, addr);

        addressBook.addPerson(person);
    }

    // Sort by last name
    addressBook.sortByLastName();

    // Search by last name
    addressBook.searchLastName("Ahmad");

    // Print details by name
    addressBook.printDetailsByName("Mir", "Ahmad");

    // Print birthdays in a given month
    addressBook.printBirthdaysInMonth(5);

    // Print names between two last names
    addressBook.printNamesBetweenLastNames("Doe", "Smith");

    // Print by relation
    addressBook.printByRelation("Family");

    return 0;
}
