#include <iostream>
#include <cmath>

using namespace std;

string dayOfWeek(int dayNum);

int main() 
{
    cout << dayOfWeek(3) << endl;

    return 0;
}

string dayOfWeek(int dayNum) 
{
    string day;

    switch (dayNum)
    {
        case 0:
            day = "Sunday";
            break;
        case 1:
            day = "Monday";
            break;
        case 2:
            day = "Tuesday";
            break;
        case 3:
            day = "Wednesday";
            break;
        case 4:
            day = "Thursday";
            break;
        case 5:
            day = "Friday";
            break;
        case 6:
            day = "Saturday";
            break;
        default:
            cout << "ERROR: " << dayNum << " is not a valid day of the week." << endl;
            break;
    }

    return day;
}
