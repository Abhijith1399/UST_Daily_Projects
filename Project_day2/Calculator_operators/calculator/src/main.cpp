
//command line argument

#include<iostream>
using namespace std;
int main(int argc[], char*argv[])   
{
	//cout << argv[0] << endl;
	//cout << argv[1] << endl;
	//cout << argv[2] << endl;
	//cout << argv[3] << endl;
	switch (argv[1][0]) {
	case'+':
		cout << "addition" << atoi(argv[2]) + atoi(argv[3])<<endl;
		break;
	case'-':
		cout << "addition" << atoi(argv[2]) - atoi(argv[3]) << endl;
		break;
	case'*':
		cout << "addition" << atoi(argv[2]) * atoi(argv[3]) << endl;
		break;
	case'/':
		cout << "addition" << atoi(argv[2]) / atoi(argv[3]) << endl;
		break;
	}


	return 0;
}