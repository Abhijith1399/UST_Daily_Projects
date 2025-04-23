#include<iostream>
using namespace std;
int main() {

	int limt;
	int i;
	cout << "enter the value" << endl;
	cin >> limt;

	
	for (i = 1;i <= (limt * limt);i++) {


		if (i % 5 == 0) {

			cout << i << endl;


		}
		else {

			cout << i << "*";
		}
	}
		
	

}