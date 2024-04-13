#ifndef EXTPERSON_TYPE_H
#define EXTPERSON_TYPE_H

#include <iostream>
#include <string>
#include "personType.h"
#include "dateType.h"
#include "addressType.h"

class extPersonType : public personType {
public:
    extPersonType(std::string first = "", std::string last = "", std::string phone = "", std::string relation = "");
    void setDetails(std::string phone, std::string relation, dateType dob, addressType addr);
    void printDetails() const;
    std::string getRelationship() const;
    int getBirthMonth() const;

private:
    std::string phoneNumber;
    std::string relationship;
    dateType dateOfBirth;
    addressType address;
};

#endif /* EXTPERSON_TYPE_H */
