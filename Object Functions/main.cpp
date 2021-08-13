#include <iostream>
using namespace std;

class Student 
{
    public:

        string name;
        string major;
        double gpa;

        Student(string _name, string _major, double _gpa) 
        {
            name = _name;
            major = _major;
            gpa = _gpa;
        }

        bool hasHonours() 
        {
            if (gpa >= 3.5) 
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main() 
{
    Student student1("Jim", "Business", 2.4);
    Student student2("Pam", "Art", 3.6);

    if(student1.hasHonours()) 
    {
        cout << student1.name << " has honours in " << student1.major << endl;
    }
    else
    {
        cout << student1.name << " does not have honours" << endl;
    }

    if(student2.hasHonours()) 
    {
        cout << student2.name << " has honours in " << student2.major << endl;
    }
    else
    {
        cout << student2.name << " does not have honours" << endl;
    }

    return 0;
}
