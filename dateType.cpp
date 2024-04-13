#include "dateType.h"
#include <iostream>
using namespace std;

dateType::dateType(int m, int d, int y) {
    setDate(m, d, y);
}

void dateType::setDate(int m, int d, int y) {
    if (m < 1 || m > 12 || d < 1 || d > 31 || y < 1900) {
        cerr << "Invalid date!" << endl;
        return;
    }
    if (m == 2) { // February
        if (isLeapYear(y)) {
            if (d > 29) {
                cerr << "Invalid date!" << endl;
                return;
            }
        } else {
            if (d > 28) {
                cerr << "Invalid date!" << endl;
                return;
            }
        }
    } else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
        cerr << "Invalid date!" << endl;
        return;
    }
    month = m;
    day = d;
    year = y;
}

bool dateType::isLeapYear(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

void dateType::printDate() const {
    cout << month << "/" << day << "/" << year;
}

int dateType::getMonth() const {
    return month;
}
