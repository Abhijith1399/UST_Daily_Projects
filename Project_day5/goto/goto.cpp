#include <iostream>
using namespace std;
int display();
int main() {
	while (true)
	{
		int ret = display();
		switch (ret)
		{
		case 1:cout << "add" << endl;
			break;

		case 2:cout << "sub" << endl;
			break;

		case 3:cout << "multi" << endl;
			break;

		case 4:cout << "div" << endl;
			break;
		case 0:cout << "exit" << endl;
			goto END;
			break;
		}
	END: {
		cout << "program end successfully" << endl;
		return 0;

		}
	
	
	}
}int display()
{
	
	cout << "press" << endl;
	cout << "1.addd" << endl;
	cout << "3.multiii" << endl;
	cout << "4.divvvv" << endl;
	cout << "2.subbbb" << endl;
	cout << "0.exit" << endl;
	return 0;
}