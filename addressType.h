#ifndef ADDRESSTYPE_H
#define ADDRESSTYPE_H

#include <iostream>
#include <string>

class addressType {
public:
    addressType(std::string street = "", std::string city = "", std::string state = "", std::string zip = ""); // Constructor
    void setAddress(std::string street, std::string city, std::string state, std::string zip); // Set Address
    void printAddress() const; // Print Address

private:
    std::string streetAddress;
    std::string city;
    std::string state;
    std::string zipCode;
};

#endif /* ADDRESSTYPE_H */
