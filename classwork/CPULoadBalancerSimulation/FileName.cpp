#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	ifstream wrfile("F.txt");

	string line;

	if (wrfile.is_open()) {
		getline(wrfile, line);

		size_t spapos = line.find(" ");
		size_t compos = line.find(",");

		string nstr1 = line.substr(spapos + 1, compos - 1);
		string nstr2 = line.substr(compos + 1);

		int a = stoi(nstr1);
		int b = stoi(nstr2);

		int c = a + b;

		cout << "add" << c;
	}
}