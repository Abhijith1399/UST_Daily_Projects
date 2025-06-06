#include<iostream>
#include"Instruction.h"
using namespace std;

int main()
{
    map<string, vector<int>> Reg_Value;
    map<int, vector<int>> value_Adress;
    map<string, vector<int>> Reg_Adress;
    map<int, vector<string>> Adress_Reg;

    Instruction instr;// create object for function class

    /* Arithamatic functon implementation*/
    instr.Add(Reg_Value, value_Adress, Reg_Adress, Adress_Reg, "AX", "BX");//Add function call
    instr.Sub(Reg_Value, value_Adress, Reg_Adress, Adress_Reg,"BX", 3);//sub function call
    instr.Multiplication(Reg_Value, value_Adress, Reg_Adress, Adress_Reg, 4, 20);//multiplication function call
    instr.Division(Reg_Value, value_Adress, Reg_Adress, Adress_Reg,  4, 3);//Division function call

    /* read data from txt file in different map*/
    instr.Move(Reg_Value, value_Adress, Reg_Adress, Adress_Reg);//move function call

    for (const auto& i: Reg_Value)// calling Reg_value map
    {
        cout << i.first << ": ";
        for (int val :i.second)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    for (const auto& i : value_Adress)//calling value-Adress map
    {
        cout << i.first << ": ";
        for (int addr : i.second) 
        {
            cout << addr << " ";
        }
        cout << endl;
    }
    for (const auto& i : Reg_Adress)//calling Reg-Adress map
    {
        cout << i.first << ": ";
        for (int addr : i.second) 
        {
            cout << addr << " ";
        }
        cout << endl;
    }
    for (const auto& i : Adress_Reg)// calling Adress_Reg map
    {
        cout << i.first << ": ";
        for (const string& reg : i.second)
        {
            cout << reg << " ";
        }
        cout << endl;
    }

    instr.Halt(Reg_Value, value_Adress, Reg_Adress, Adress_Reg);
	
}