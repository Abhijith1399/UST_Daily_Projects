
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream fIO;
	fIO.open("Test.txt",ios::in| ios::out);
	{
		if(!fIO.is_open())
		{
			cerr << "erroe: opening file" << endl;
		}
	}
	fIO << "hello world" << endl;
	return 0;
}