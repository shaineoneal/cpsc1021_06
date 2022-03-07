#include "Date.h"
#include <string>

using namespace std;

const string Date::MONTHS[12] 
    {"January", "February", "March", "April", "May", "June",
    "July", "August", "September", "October", "November", "December"};

Date::Date(int m, int d, int y) : month{m}, day{d}, year{y} {}

void Date::setMonth(int) {

}
void Date::setDay(int) {

}
void Date::setYear(int) {

}

int const Date::getMonth() 
    { return month; }

int const Date::getDay() 
    { return day; }

int const Date::getYear() 
    { return year; }

string Date::print() {

}
bool Date::compare(const Date, const Date) {

}