#include<iostream>
using namespace std;

namespace Employee
{

	class stack
	{
	public:
		stack() { cout << "employee"; }
	};

}

namespace Finance
{

	class stack
	{
	public:
		stack() { cout << "finance"; }
	};

}
int main()
{
	Finance::stack fs;
	Employee::stack sE;
}