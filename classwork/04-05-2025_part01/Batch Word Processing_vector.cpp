#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;


void insert(vector<string>& myvector)
{
	myvector.push_back("APPLE");
	myvector.push_back ("banana");
	myvector.push_back("apple");
	myvector.push_back("Orange");
	myvector.push_back("BANANA");
	myvector.push_back("grape");
}
void sort(vector<string>& myvector)
{
	sort(myvector.begin(), myvector.end());
}
void duplication(vector<string>& myvector)
{
	auto i = unique(myvector.begin(), myvector.end());
	myvector.erase(i, myvector.end());
}
void lower(vector<string>& myvector)
{
	//transform(myvector.begin(), myvector.end(), myvector.begin(), ::tolower);
	for (auto& i : myvector) {
		transform(i.begin(), i.end(), i.begin(),
			[](unsigned char c) { return tolower(c); });
	}

}
void display(vector<string>&myvector)
{
	for (const auto& line : myvector) {
		cout << line << endl;
	}
}

int main()
{
	vector<string>myvector;
	insert(myvector);
	lower(myvector);
	sort(myvector);
	duplication(myvector);
	display(myvector);

	return 0;
}
