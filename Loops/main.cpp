#include <iostream>
#include <cmath>
#include "klib.h"

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

    cout << "\nFor loop:\n" << endl;

    for(int i = 1; i <= 5; i++) 
    {
        cout << i << endl;
    }

    cout << "\nFor loop through array:\n" << endl;

    int nums[] = {2, 5, 3, 17, 6};
    int n_nums = NELEMS(nums);

    for(int i = 0; i < 5; i++) 
    {
        cout << nums[i] << endl;
    }

    return 0;
}
