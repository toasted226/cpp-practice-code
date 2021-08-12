#include <iostream>
#include <cmath>

using namespace std;

double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

int main() 
{
    double num1, num2;
    int op, ans;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Operator options:\n";
    cout << "1) Plus (+)\n";
    cout << "2) Minus (-)\n";
    cout << "3) Times (*)\n";
    cout << "4) Divide (/)\n";
    cout << "Choose operator (1, 2, 3, 4): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    if(op == 1) 
    {
        ans = add(num1, num2);
    }
    else if (op == 2)
    {
        ans = subtract(num1, num2);
    }
    else if (op == 3)
    {
        ans = multiply(num1, num2);
    }
    else if (op == 3)
    {
        ans = divide(num1, num2);
    }else 
    {
        cout << "Error: Invalid choice";
    }
    
    cout << "\nAnswer: " << ans << endl;

    return 0;
}

double add(double num1, double num2) 
{
    return num1 + num2;
}

double subtract(double num1, double num2) 
{
    return num1 - num2;
}

double multiply(double num1, double num2) 
{
    return num1 * num2;
}

double divide(double num1, double num2) 
{
    return num1 / num2;
}
