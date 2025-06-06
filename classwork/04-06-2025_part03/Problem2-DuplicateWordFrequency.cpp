#include<iostream>
#include <set>
#include<algorithm>
#include<string>
using namespace std;

void display(multiset<string>& mymset)
{
	
	for (auto i : mymset)
		cout << i << " ";
}
void count(multiset<string>& mymset)
{

	string text = "hello world hello code hello learn world code";
	size_t start = 0, end;
	while ((end = text.find(' ', start)) != string::npos)
	{
		mymset.insert(text.substr(start, end - start));
		start = end + 1;
	}
 
	cout << "'hello': " << mymset.count("hello") << endl;
	cout << " 'world': " << mymset.count("world") << endl;
	cout << "'code': " << mymset.count("code") << endl;
}
int main()
{
	multiset<string> mymset;
    count(mymset);
	display(mymset);

}