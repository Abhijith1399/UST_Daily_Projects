#include"Instruction.h"
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>


void Instruction:: Move(map<string, vector<int>>& Reg_Value,
	map<int, vector<int>>& value_Adress,
	map<string, vector<int>>& Reg_Adress,
	map<int, vector<string>>&Adress_Reg)
{
	/* read the data from txt file */
    ifstream file("instruction.txt");
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
    Reg_Value[this->type].emplace_back(this->value); 
	Reg_Adress[this->type].emplace_back(this->adress);    
	value_Adress[this->value].emplace_back(this->adress);  
	value_Adress[this->adress].emplace_back(this->value); 
	}
	file.close();
	
}

