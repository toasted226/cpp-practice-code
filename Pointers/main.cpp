#include <iostream>

using namespace std;

int main() 
{
    int age = 19;
    int * pAge = &age;

    double gpa = 2.7;
    double * pGpa = &gpa;

    string name = "Keagan";
    string * pName = &name;

    cout << "age: " << pAge << " : " << *pAge << endl; //Pointer variable and dereferenced pointer
    cout << "gpa: " << &gpa << " : " << gpa << endl; //Mem addr of gpa and gpa
    cout << "name: " << pName << " : " << name << endl; //Pointer variable of name and name
}
