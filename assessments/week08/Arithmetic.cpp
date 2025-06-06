#include"Instruction.h"
#include<iostream>
#include<string>

void Instruction::Add(map<string, vector<int>>& Reg_Value,
	map<int, vector<int>>& value_Adress,
	map<string, vector<int>>& Reg_Adress,
	map<int, vector<string>>& Adress_Reg ,string type,string type1)
{
	type+= type1;
	cout << "ADD " << type << ", " << type1<<endl;
}

void Instruction::Sub(map<string, vector<int>>& Reg_Value,
	map<int, vector<int>>& value_Adress,
	map<string, vector<int>>& Reg_Adress,
	map<int, vector<string>>& Adress_Reg,string type,int adress)
{
	type = "type" - adress;
	cout << "SUB " << type << "[" << adress << "]" << endl;
}

void Instruction::Multiplication(map<string, vector<int>>& Reg_Value,
	map<int, vector<int>>& value_Adress,
	map<string, vector<int>>& Reg_Adress,
	map<int, vector<string>>& Adress_Reg, int adress ,int value)
{
	adress *= value;
	cout << "MUL " <<"[" << adress<<"]" << "," << value<<endl;
}

void Instruction::Division(map<string, vector<int>>& Reg_Value,
	map<int, vector<int>>& value_Adress,
	map<string, vector<int>>& Reg_Adress,
	map<int, vector<string>>& Adress_Reg, int adress, int adres)
{
	adress /= adress;
	cout << "DIV " << "[" << adress << "]" << "," << "[" << adress << "]" << endl;
}