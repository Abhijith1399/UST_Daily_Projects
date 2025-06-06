#include"Instruction.h"
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>

void Instruction::Halt(map<string, vector<int>>& Reg_Value,
    map<int, vector<int>>& value_Adress,
    map<string, vector<int>>& Reg_Adress,
    map<int, vector<string>>& Adress_Reg)
{


    ifstream file("instruction.txt", ios::app);
    if (!file.is_open()) {
        cerr << "File cannot be opened" << endl;
        exit(1);
    }

    string line;
    while (getline(file, line)) {
        istringstream is(line);
        string regType;
        int value, address;

        if (!(is >> regType >> value >> address)) {
            cerr << line << endl;
            continue;
        }
    }
}