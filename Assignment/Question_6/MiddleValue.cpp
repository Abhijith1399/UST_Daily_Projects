#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "enter the first num" << endl;
	cin >> a;
	cout << "enter the second num" << endl;
	cin >> b;
	cout << "enter the third num" << endl;
	cin >> c;


	if (((a < b) && (b < c)) || ((c < a) && (b< a)))
	
		cout << b;
	
	else  if (((b<a)&& (a<c)) ||((c<a)&&(a<b)))
		
		cout<<a;
	else
		cout<<c;
	}
   

