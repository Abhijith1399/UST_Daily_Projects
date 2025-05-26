#include<iostream>
using namespace std;
#define max 5
class Parcel
{
private:
	string parcelid;
	int weight;
	int distance;
	int coast;
	int array[max];
	int size;

public:

	string parcelname;
	int parcelcount;
	float food;

	Parcel()
	{   

		int* ptr = new int;
		parcelid = "12sgdh";
		weight = 100;
		distance = 200;
		coast = 300;
		size = 4;
		for (int i = 0;i < max;i++)
		{
			array[i] = 0;

		}
		
		
	}
	void display();

	void ptrdisplay()
	{

		cout<< parcelname;
		cout<< parcelcount;
		cout<< food;
	
	
	}


 };



void Parcel:: display()
{
	cout << parcelid;
	cout << weight;
	cout << distance;
	cout << coast;
	for (int i = 0;i < max;i++)
	{
	
		cout << array[i];

	}
	


}
int main()
{
	Parcel obj;
Parcel* ptr = &obj;
	//obj.parcelname = "dsjfg12";
	//obj.food =101.0;
	//obj.parcelcount = 1000;
	//obj.ptrdisplay();
    //obj.display();



	Parcel arr[max];



	for (int i = 0;i < max;i++)
	{
		arr[i].food = 99.0;

		arr[i].parcelcount = 10000;
		arr[i].parcelname = "sahg";
		
	}
	for (int i = 0;i < 1;i++)
	{
		cout << arr->parcelname << arr->food << arr->parcelcount;
	}
	return 0;

	
}