#include<iostream>
#include<string>
#include<fstream>

using  namespace std;

int main()
{
	/**ofstream fOut("emp.txt");
	fOut << "hello word" << endl;
	fOut.close();
	return 0;
	*
	* 
	
	ifstream file("input.txt");
	if (!file.is_open()) {
		cerr << "Error opening file!" << endl;
	}*/

	/**ofstream fOut("emp.txt", ios::app, ios::trunc);
	fOut << "Name" << endl;
	fOut << "Name" << endl;
	fOut.close();**/
	ifstream inFile("emp.txt");
	string line;
	getline(inFile, line, '#');
		cout << line << endl;
	
	inFile.close();

}