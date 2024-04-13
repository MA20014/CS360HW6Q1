#include "extPersonType.h"
#include <iostream>
using namespace std;

extPersonType::extPersonType(string first, string last, string phone, string relation) : personType(first, last) {
    phoneNumber = phone;
    relationship = relation;
}

void extPersonType::setDetails(string phone, string relation, dateType dob, addressType addr) {
    phoneNumber = phone;
    relationship = relation;
    dateOfBirth = dob;
    address = addr;
}

void extPersonType::printDetails() const {
    cout << getFirstName() << " " << getLastName() << endl;
    cout << "Phone: " << phoneNumber << endl;
    cout << "Relationship: " << relationship << endl;
    cout << "Date of Birth: ";
    dateOfBirth.printDate();
    cout << endl << "Address: ";
    address.printAddress();
    cout << endl;
}

string extPersonType::getRelationship() const {
    return relationship;
}

int extPersonType::getBirthMonth() const {
    return dateOfBirth.getMonth();
}
