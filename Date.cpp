#include "Date.h"
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

const string Date::MONTHS[12] {"JANUARY", "FEBRUARY", 
    "MARCH", "APRIL", "MAY", "JUNE", "JULY", "AUGUST", 
    "SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};

void Date::setMonth(int m) {
    month = m;
}
void Date::setDay(int d) {
    day = d;
}
void Date::setYear(int y) {
    year = y;
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
    stringstream ss;
    string monthName;

    monthName = MONTHS[month - 1];

    ss << left << setw(10) << monthName << setw(3) << day << right << setw(5) << year;
    
    return ss.str();
}

// returns true if first date is earlier than second date
bool Date::compare(const Date d1, const Date d2) 
{
    bool first = false;
    if(d1.year < d2.year)
        { first = true; }

    if(d1.year == d2.year)
    {
        if(d1.month == d2.month)
        {
            if(d1.day < d2.day)
                { first = true; }
        }
        else if(d1.month < d2.month)
            { first = true; }
    }
    return first;
}