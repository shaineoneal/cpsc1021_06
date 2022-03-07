#ifndef DATE_H_
#define DATE_H_
#include <string>

using namespace std;

class Date {
        int month {01}, 
            day {01},
            year {1900};
        
    public:
        string static const MONTHS[12];

        Date() = default;
        Date(int m, int d, int y) : 
            month{m}, day{d}, year{y} {}

        void setMonth(int);
        void setDay(int);
        void setYear(int);

        int const getMonth();
        int const getDay();
        int const getYear();

        string print();

        static bool compare(const Date, const Date);

};

#endif