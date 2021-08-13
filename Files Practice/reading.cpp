#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "reader.h"

using namespace std;

void Reader::read_students() 
{
    vector<string> lines;

    ifstream ifs("students.txt");
    for(string line; getline(ifs, line);) 
    {
        lines.push_back(line);
    }
    ifs.close();

    for (int i = 0; i < lines.size(); i++)
    {
        cout << lines[i] << endl;
    }
}
