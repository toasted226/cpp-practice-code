#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    cout << "\nWhile loop:\n" << endl;

    int index = 0;
    while (index < 5)
    {
        index++;
        cout << index << endl;
    }

    cout << "\nDo while loop:\n" << endl;

    int index2 = 6;
    do 
    {
        index2++;
        cout << index2 << endl;
    }
    while(index2 < 5);

    return 0;
}
