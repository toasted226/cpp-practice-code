#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Student 
{
    public:
        string name;
        int age;
        Student(string _name, int _age);
};

class Writer 
{
    public:
        void append_students();
        void write(vector<Student> students);
};
