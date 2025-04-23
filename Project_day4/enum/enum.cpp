#include<iostream>
#include"stringhandling.h"
using namespace std;
void enumHandling()
{

	enum Day{monday=1,tuesday=2,wednes=3};
	Day today = monday;
	Day today2 = tuesday;
	cout << "today value" << today << endl;
	cout << "today value" << today2 << endl;

 }