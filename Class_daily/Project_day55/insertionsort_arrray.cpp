#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> vec)
{
	for (int v : vec)
		cout << v << " ";
	cout << endl;
}

void insertionsort(vector<int> vec)
{

	for (int i = 1;i < vec.size();i++)

	{
		int key = vec[i];
		int j = i - 1;
		while (j >= 0 && key < vec[j])
		{
			vec[j + 1] = vec[j];j--;
		}
		vec[j + 1] = key;
		cout << "After inserting element at index " << i << " (" << key << "): " << endl;

		cout << "after sort" << endl;
		display(vec);
	}

}


int main()
{
	vector<int> vec = { 8,9,3,7,22,13 };
	cout << "orginal" << endl;
	display(vec);

	insertionsort(vec);
	
}
