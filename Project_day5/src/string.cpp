#include<iostream>
#include <sstring.h>
using namespace std;
int stringFunction()
{

	string genere;
	cout << "enter the genere:" << endl;
	cin >> genere;
	if (genere[0] >= 48 && genere[0] <= 57) {
		cout << "enter the name you cant start with numeric character" << endl;
		return 0;
	}
	bool flag = true;
	for (int i = 0;i < genere.length();i++)
	{
		if ((genere[i] >= 65 && genere[i] <= 90) || (genere[i] >= 97 && genere[i] <= 122)) {

		}flag = false;
	}
	if (!flag) {
		cout << "genere name is does not start with non albhabet and character" << endl;
		return 0;
	}
	else if (genere.compare("Action") == 0) {
		cout << "its an action movie" << endl;
	}
 else if (genere.compare("Comedy") == 0)
		{
		cout << "its an comedy movie" << endl;
		}
 else if (genere.compare("Triller") == 0)
	{
		cout << "its an Triller movie" << endl;
	}


	return 0;
}