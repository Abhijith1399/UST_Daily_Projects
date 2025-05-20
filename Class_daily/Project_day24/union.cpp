
#include <iostream>
#include <cstring>
using namespace std;
typedef union Employee
{
    int e_id;
    char e_name[20];
}EMP;


int main()
{
    EMP e;
    cout << sizeof(e) << endl;
    e.e_id = 101;
    cout << e.e_id << endl;
    strcpy(e.e_name, "jithu");
    cout << e.e_name;

}

