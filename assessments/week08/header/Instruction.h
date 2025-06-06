	#pragma once
	#include<iostream>
	#include<map>
	#include<vector>
	using namespace std;

	class Instruction
	{
	private:

		int size;
		/* assign the value and adress */
		int value;
		int adress;
		/* assign the  4 type of register */
		string type;

		map<string, vector<int>>Reg_Value;//to store value in the register
		map<int, vector<int>>value_Adress;//to store value in the adress
		map<string, vector<int>>Reg_Adress; //to store reg in the  adress
		map<int, vector<string>>Adress_Reg;//to store adress  in the register

	public:
		Instruction(){
			size = 65536;   //16 bit cpu
		}
		/* set the value*/
		void setvalue(int value) { this->value = value; }
		void setadress(int adress) { this->adress = adress; }
		void settype(int type) { this->type = type; }

		/* get the value*/
		int getvalue(int value) { return value; }  
		int getadress(int adress) { return adress; }
		string gettype(string type) { return type; }


		/*function store adress value in register*/
		void Move(map<string, vector<int>>&Reg_Value,
			map<int, vector<int>>&value_Adress, 
			map<string, vector<int>>&Reg_Adress,
			map<int, vector<string>>&Adress_Reg);

		/*function for arithamatic instruction*/
		void Add(map<string, vector<int>>& Reg_Value,
			map<int, vector<int>>& value_Adress,
			map<string, vector<int>>& Reg_Adress,
			map<int, vector<string>>& Adress_Reg,string,string);

		void Sub(map<string, vector<int>>& Reg_Value,
			map<int, vector<int>>& value_Adress,
			map<string, vector<int>>& Reg_Adress,
			map<int, vector<string>>& Adress_Reg,string,int);

		void Multiplication(map<string, vector<int>>& Reg_Value,
			map<int, vector<int>>& value_Adress,
			map<string, vector<int>>& Reg_Adress,
			map<int, vector<string>>& Adress_Reg, int, int);

		void Division(map<string, vector<int>>& Reg_Value,
			map<int, vector<int>>& value_Adress,
			map<string, vector<int>>& Reg_Adress,
			map<int, vector<string>>& Adress_Reg, int, int);

		/*function for Halt*/
		void Halt(map<string, vector<int>>& Reg_Value,
			map<int, vector<int>>& value_Adress,
			map<string, vector<int>>& Reg_Adress,
			map<int, vector<string>>& Adress_Reg);
	
	};
