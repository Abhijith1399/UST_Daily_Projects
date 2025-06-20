#include<iostream>
using namespace std;
int main()
{
	/**auto greet = []() {cout << "hello Abhijith" << endl;};
	greet();
	return 0;*/
	auto greet = [](const string name) {cout << "hi" << name << endl;
	return"greet";};

	cout << greet("abhi") << endl;

	return 0;

}