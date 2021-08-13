#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "reader.h"
#include "writer.h"

using namespace std;

Student::Student(string _name, int _age) 
{
    name = _name;
    age = _age;
}

void Writer::append_students() 
{
    vector<Student> students;
    int numStudents;
    cout << "Enter number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; i++)
    {
        string name;
        int age;

        cout << "Student #" << i + 1 << " name: ";
        cin >> name;
        cout << "Student #" << i + 1 << " age: ";
        cin >> age;

        students.push_back(Student(name, age));
    }
}

void Writer::write(vector<Student> students) 
{
    ofstream ofs("students.txt", ios::app);
    for (int i = 0; i < students.size(); i++)
    {
        ofs << students[i].name << ", " << students[i].age << endl;
    }
    ofs.close();
}
