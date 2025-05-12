#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int num;
	cin >> num;
	int digit = 0;
	int temp = num;
	int amsrong = 0;
	int count = 0;
	bool flag = true;
	while (temp > 0)
	{
		digit = temp % 10;
		temp /= 10;
		count++;
		
	 }
	temp = num;
	while (temp > 0)
	{
		digit = temp % 10;
		temp /= 10;
		amsrong += pow(digit, count);
		//cout << amsrong;
	}
	if (amsrong == num)

	flag = false;
	if(!flag)
	{
		cout << "amsrong" << endl;
	}
	else
	{
		cout << "not" << endl;
	}
	return 0;
}