#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

class oranges
{
private:
    string orangeLocal = "Oranges.txt";
    float Oranges[10] = {};
    int loopCounter = 0;
    int executionCounter = 0;
    int iteration = 0;

public:
    oranges();

    void showOranges();
    void readOranges();
    void arrangeNOrangesByRipeness();
};
