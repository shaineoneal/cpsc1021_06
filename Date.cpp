#include "Date.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const string Date::MONTHS[12] {"January", "February", 
    "March", "April", "May", "June","July", "August", 
    "September", "October", "November", "December"};

Date::Date(int m, int d, int y) : month{m}, day{d}, year{y} {}

void Date::setMonth(int) {

}
void Date::setDay(int) {

}
void Date::setYear(int) {

}

// getter functions
const int Date::getMonth() 
    { return month; }

const int Date::getDay() 
    { return day; }

const int Date::getYear() 
    { return year; }

// builds and returns a string that is printed into output file
string Date::print() {

}

// returns true if first date is earlier than second date
bool Date::compare(const Date, const Date) {

}