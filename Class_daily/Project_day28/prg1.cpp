#include<iostream>
using namespace std;





class Myarray
{

private:
	int* arr;
	int size;
	int capacity;

public:

	int push_back(int);
	int biggest();
	bool sortAsc();
	bool desc();
	void printArray();
	int getsize()const;
	int getcapacity()const;
	int resize();

	Myarray() { capacity = 1, size = 0, arr = new int[capacity]; }

};

int Myarray:: getcapacity()const
{
	return capacity;
}

int Myarray::getsize()const
{
	return size;
}

int Myarray::push_back(int a)
{
	if (size == capacity)
	{
		cout << "capacity is equal to size when adding new elemet\t" << a << endl;
		resize();
	}
	arr[size++]=a;

	return 0;
}

int Myarray:: biggest()
{
	int MAX = INT_MIN;
	{
		for (int i = 0;i < size;i++)
		{

			if (MAX < arr[i])
			{
				MAX = arr[i];
			}
		}
	}
	return MAX;
}

void Myarray::printArray()
{
	for (int i = 0;i < size;i++)
	{
		cout << arr[i] << endl;
    }
}
int Myarray::resize()
{
	capacity *= 2;
	int* newData = new int[capacity];//copy content to new data

	for (int i = 0;i < size;i++)
	{
		newData[i] = arr[i];
		delete[]arr;
		arr = newData;

	}
	return 0;
}


int main()
{
	Myarray obj;

	cout << "size" << obj.getsize() << obj.getcapacity() << endl;
	obj.push_back(10);
	obj.push_back(11);
	obj.push_back(12);
	obj.push_back(13);
	obj.push_back(14);
	obj.printArray();

	return 0;

};