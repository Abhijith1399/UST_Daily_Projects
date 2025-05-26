#include<iostream>

using namespace std;

class Linklist
{
private:
	int data;
	Linklist* next;
public:
	Linklist(int v = 0)
	{
		data= v;
		next = nullptr;

	}
};
class LList
{
private:
	Linklist* head;
public:
	LList()
	{
		head = nullptr;
	}

};

int main()
{

}
