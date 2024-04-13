#ifndef DATETYPE_H
#define DATETYPE_H

#include <iostream>

class dateType {
public:
    dateType(int m = 1, int d = 1, int y = 1900); // Constructor
    void setDate(int m, int d, int y); // Set Date
    bool isLeapYear(int y); // Check for leap year
    void printDate() const; // Print Date
    int getMonth() const; // Get month

private:
    int month;
    int day;
    int year;
};

#endif /* DATETYPE_H */
