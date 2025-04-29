<<<<<<< HEAD

#include <iostream>
using namespace std;
bool checkPrime(int);
int main()
{
    int num;
    int count = 0;
    cout << "enter the num=";
    cin >> num;
    for (int i = 1;i < num;i++)
    {
        for (int j = i;j < num;j++)
			if(checkPrime(i)&&checkPrime(j))
            if (i + j == num) {
                cout << i << "+" << j << "=" << (i + j) << endl;
            }


    }return 0;
}

bool checkPrime(int val1)
{
	bool flag = false;
	if (val1 <= 1)
		return false;
	for (int i = 2;i <= val1 / 2;i++)
	{
		if (val1 % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == 1)
		return false;
	else
		return true;
=======

#include <iostream>
using namespace std;
bool checkPrime(int);
int main()
{
    int num;
    int count = 0;
    cout << "enter the num=";
    cin >> num;
    for (int i = 1;i < num;i++)
    {
        for (int j = i;j < num;j++)
			if(checkPrime(i)&&checkPrime(j))
            if (i + j == num) {
                cout << i << "+" << j << "=" << (i + j) << endl;
            }


    }return 0;
}

bool checkPrime(int val1)
{
	bool flag = false;
	if (val1 <= 1)
		return false;
	for (int i = 2;i <= val1 / 2;i++)
	{
		if (val1 % i == 0)
		{
			flag = true;
			break;
		}
	}
	if (flag == 1)
		return false;
	else
		return true;
>>>>>>> 4c5be30b21899113c6d8d38d8efa578370de356d
}