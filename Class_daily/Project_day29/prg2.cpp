#include<iostream>
using namespace std;

//linked list
#include<iostream>
using namespace std;

struct  node {
	int v;
	struct node* ptr;
};


int main()
{
	// step 1allocated memmory

	struct node n1, n2, n3, n4,n5,n6;
	cout << sizeof(n1) << "\t" << "Adress of n1" << (unsigned long int) & n1;
	cout << sizeof(n2) << "\t" << "Adress of n1" << (unsigned long int) & n2;
	cout << sizeof(n3) << "\t" << "Adress of n1" << (unsigned long int) & n3;
	cout << endl;

	//step 2 initized all value
	n1.v = 10;
	n1.ptr = NULL;
	n2.v = 20;
	n2.ptr = NULL;
	n3.v = 30;
	n3.ptr = NULL;
	n4.v = 40;
	n4.ptr = NULL;
	n5.v = 50;
	n5.ptr = NULL;
	n6.v = 60;
	n6.ptr = NULL;


	cout << "n1 val\t" << n1.v << (unsigned long int)n1.ptr << endl;
	cout<< "n2 val" << n2.v<< (unsigned long int)n2.ptr << endl;
	cout<< "n3 val" << n3.v<<(unsigned long int)n1.ptr << endl; 
	// make relation

	n1.ptr = &n2;
	n2.ptr = &n3;

	cout << "after relatio ship" << endl;
	cout << "n1 val\t" << n1.v << n1.ptr<<(unsigned long int)&n1<< endl;
	cout << "n2 val" << n2.v << n2.ptr<<(unsigned long int)&n2 << endl;
	cout << "n3 val" << n3.v << n3.ptr<<(unsigned long int)&n1 << endl;



	//step 4 traversing the list
/*
	struct node* head = &n1;
	cout << n1.v << endl;
	cout << head->v << endl;

	head = head->ptr;//head = &n2;
	cout << n2.v << endl;
	cout << head->v << endl;

	
	head = head->ptr;//head = &n3;
	cout << n3.v << endl;
	cout << head->v << endl;
	*/
	struct node* head = &n1;
	while (head!=NULL)
	{

		cout << head->v << "->";
		head = head->ptr;

	}
	cout << "NULL" << endl;

	n1.ptr = &n4;
	n4.ptr = &n2;
	head = &n1;
	while (head != NULL)
	{

		cout << head->v << "->";
		head = head->ptr;

	}
	cout << "NULL" << endl;

	head = &n5;
	n5.ptr = &n1;
	n1.ptr = &n4;
    n4.ptr = &n2;
	n2.ptr = &n3;
	n3.ptr = &n6;
	while (head != NULL)
	{

		cout << head->v << "->";
		head = head->ptr;

	}
	cout << "NULL" << endl;
	

	return 0;
}