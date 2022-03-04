#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string crossBar = "=============================================================================================\n";
    string barWalls = "|===========================================================================================|\n";
    string programDescription = "This software aims to utilize ten numbers in various capacities, generating the data below:";
    string messageMax = "Set Maximum:";
    string messageMin = "Set Minimum:";
    string messageAvg = "Set Average:";
    string messageMmAvg = "Min/Max Average:";
    string percentDeviationMessage = "Min/Max Avg '%' deviation from Set Avg:";
    string messageSetQuality = "Set Quality:";
    char choice;

    int displayWidth = crossBar.length();

    cout << fixed << showpoint << setprecision(2);

    cout << crossBar;
    cout << setw((displayWidth - programDescription.length()) / 2) << left << "|" << right << programDescription << setw((displayWidth - programDescription.length()) / 2) << right << "|" << endl;
    cout << barWalls;
    cout << setw(displayWidth - 2) << left << "|" << right << "|" << endl;

    cout << setw((displayWidth - messageMax.length()) / 2) << left << "|"
         << right << messageMax << setw((displayWidth - messageMax.length() - 1) / 2) << right << "|" << endl;
    cout << setw((displayWidth - messageMin.length()) / 2) << left << "|"
         << right << messageMin << setw((displayWidth - messageMin.length() - 1) / 2) << right << "|" << endl;

    cout << setw((displayWidth - messageAvg.length()) / 2) << left << "|"
         << right << messageAvg << setw((displayWidth - messageAvg.length() - 1) / 2) << right << "|" << endl;

    cout << setw((displayWidth - messageMmAvg.length()) / 2) << left << "|"
         << right << messageMmAvg << setw((displayWidth - messageMmAvg.length() - 1) / 2) << right << "|" << endl;

    cout << setw((displayWidth - percentDeviationMessage.length()) / 2) << left << "|"
         << right << percentDeviationMessage << setw((displayWidth - (percentDeviationMessage.length()) - 1) / 2) << right << "|" << endl;

    cout << setw((displayWidth - messageSetQuality.length()) / 2) << left << "|"
         << right << messageSetQuality << setw((displayWidth - messageSetQuality.length() - 1) / 2) << right << "|" << endl;

    cout << setw(displayWidth - 2) << left << "|" << right << "|" << endl;
    cout << crossBar;
    cout << endl;
    cout << "Use text file instead of user input? (y/n): ";
    choice = cin.get();
    switch(choice)
    {
        case 'Y':
        case 'y': 
            break;
        case 'N':
        case 'n':
            break;
        default:
            break;
    }
    return 0;
}