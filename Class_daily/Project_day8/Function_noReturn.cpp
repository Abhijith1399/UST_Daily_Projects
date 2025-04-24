#include <iostream>
using namespace std;
void display(void);
int display_Ret(void);
int main()

{
	/*int ch;

	display();
	cout << "choice" << endl;
	cin >> ch;*/

	switch (display_Ret ())
	{
	case 1:
		cout << "Add" << endl;
		break;
	case 2:
		cout << "sub" << endl;
		break;
	case 3:
		cout << "multi" << endl;
		break;
	case 4:
		cout << "div" << endl;
		break;
	default:
		cout << "not valid" << endl;
	}
	return 0;
	
}
void display(void)
{
	
	cout << "press" << endl;
	cout << "1.Add" << endl;
	cout << "2.sub" << endl;
	cout << "3.multi" << endl;
	cout << "4.div" << endl;

}
int display_Ret(void)
{
	int ch;

	cout << "menu" << endl;
	cout << "1.Add" << endl;
	cout << "2.sub" << endl;
	cout << "3.multi" << endl;
	cout << "press" << endl;
	cin >> ch;
	return ch;

}