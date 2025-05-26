#include<iostream>
using namespace std;

typedef struct node {

	int data;
	struct data* next;
} NOD;


NOD* createNode();
NOD* addNodeBeg(NOD* , NOD*);
int dispMenu();
NOD* addNodeEnd(NOD*, NOD*);

NOD* createNode ()
{

	NOD* nn = (NOD*)malloc(sizeof(NOD));
	cout << "value of node=";
	cin >> nn->data;
	nn->next = NULL;
	
	return nn;
}
NOD* addNodeBeg(NOD *head,NOD* nn)
{	
	
		if (head == NULL)
		{
			head = nn;
			return 0;
		}
		nn->next = head;
		head = nn;
		return head;
}


int addNodeEnd(NOD* head,  NOD* nn)
{
	
	NOD* temp = head;

	if (head == NULL)
	{
		head = nn;
		return head;
	}
while(head->next)

	
}
int dispMenu()
{

	NOD* nn = NULL;
	NOD* head = NULL;
	NOD* temp = NULL;

	int ch;
	cout << "\tPress,\n\t1. Add Node Begining\n\t2. Add Node End\n";
	cout << "\t3. Display List\n\t4. Exit..\n\tChoice: ";
	cin >> ch;
	return ch;
}

	int main()
	{
		int ch = 1;
		while (ch)
		{
			switch (dispMenu())
			{
			case 1:
				addNodeBeg();
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				ch = 0;
				break;
			default:
				cout << "Something went wrong" << endl;
			}
		}

		cout << "Exiting program...." << endl;
		return 0;
	}

