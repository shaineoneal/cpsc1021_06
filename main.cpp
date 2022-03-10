#include <vector>
#include <algorithm>
#include <fstream>
#include "Date.h"

using namespace std;

int main(int argc, char const *argv[]) 
{
    int numberLines, m, d, y;
    vector<Date> allDates;
    string line, dateName;
    stringstream ss;

    //opens input file for reading
    ifstream datesInput;
    datesInput.open(argv[1], ios::in);

    //verifies that file was opened properly
    if(!datesInput.is_open()) 
    {
        cout << "Unable to open file."; 
        return EXIT_FAILURE;
    }

    //takes in first line
    getline(datesInput, line);
    numberLines = stoi(line);

    for(int i = 0; i < numberLines; i++) 
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
    //close input file
    datesInput.close();

    sort(allDates.begin(), allDates.end(), Date::compare);

    //open output file
    ofstream datesOutput;
    datesOutput.open(argv[2]);
    
    //print each line into output file
    for(int i = 0; i < numberLines; i++)
    {
        datesOutput << allDates.at(i).print() << endl;
    }

    return 0;
}