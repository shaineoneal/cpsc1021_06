#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "Date.h"

using namespace std;

int main(int argc, char const *argv[]) 
{
    int temp, m, d, y;
    vector<Date> allDates;
    string line, dateName;
    stringstream ss;

    ifstream datesInput;
    datesInput.open(argv[1], ios::in);

    if(!datesInput.is_open()) 
    {
        cout << "Unable to open file."; 
        return EXIT_FAILURE;
    }

    //takes in first line
    getline(datesInput, line);
    temp = stoi(line);

    for(int i = 0; i < temp; i++) //can't replace temp with stoi(line)
    {      
            getline(datesInput, line);
            
            //if the line has more than one char, add it to the vector
            if(line.length() > 1)
            {
                ss << line;
                ss >> m >> d >> y;
                allDates.push_back(Date(m, d, y)); 
                
                ss.clear();
            }
    }

    sort(allDates.begin(), allDates.end(), Date::compare);


    ofstream datesOutput;
    datesOutput.open(argv[2]);
    
    for(int i = 0; i < temp; i++)
    {
        datesOutput << allDates.at(i).print() << endl;
    }



    return 0;
}