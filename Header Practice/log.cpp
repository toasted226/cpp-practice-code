#include <iostream>
#include "log.h"

using namespace std;

void log(const char* message) 
{
    cout << message << endl;
}

void initLog() 
{
    Log("Initialising Log");
}
