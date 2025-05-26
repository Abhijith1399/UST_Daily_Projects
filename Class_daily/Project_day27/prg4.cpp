	#include<iostream>
	using namespace std;
	#include<algorithm>
	#define max 10

	class Array
	{
	private:

		int size;
		int* arr;

	public:
		int biggest();
		void ascending();
		void descending();


		Array(int ar[], int s)
		{
			size = s;
			arr = new int[size];

			for (int i = 0;i < size;i++)
			{
				arr[i] = ar[i];
			}

		}
		void display()

		{
			for (int i = 0;i < size;i++)
			{
				cout << arr[i] << endl;;
			}
		}

	};

	void Array::ascending()
	{
		sort(arr, arr + size);
		for (int i = 0;i < size;i++)
		{
			cout << arr[i];
		}
		cout << endl;
	}
		void Array::descending()
			{
			//	sort(arr, arr + size ,greater<int>());
				//for (int i = 0;i<size;i++)
			//	{
				//	cout << arr[i];
			//	}

			int temp = 0;
			int j = 0;
			for (int i = 0;i < size;i++)
			{
				for (int j = 0;j < size-1;j++)
				{
					if (arr[j] < arr[j + 1])
					{
						temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;

					}
				}
			}
			for (int i = 0;i < size;i++)
			{
				cout << arr[i];
			}
			cout << endl;
			}




	int  Array::biggest()
	{
		int min = -1000;
		for (int i = 0;i < size;i++)
		{
			if (min < arr[i])
			{
				min = arr[i];

			}
		}
		cout  << min << endl;;
		return 0;
	}
		int main()
		{
			int size = 5;
			int ar[max];
			for (int i = 0;i < size;i++)
			{
				cin >> ar[i];
			}

			Array obj(ar, size);
			cout << "array=="<<endl;
			obj.display();
			cout << "biggest==";
			obj.biggest();
			cout << "ascending==";
			obj.ascending();
			cout << "descending==";
		    obj.descending();
			return 0;

		}



