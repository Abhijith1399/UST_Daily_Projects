#include<iostream>
using namespace std;

int rectangle(int, int);
float circle(float);
float triangle(float, float);
int square(int);

//int display();

int rectangle(int l, int b)
{
	int arear;
	arear = 2 * l + b;
	cout << "area of rectangle " << arear << endl;
	return arear;
}

int square(int a)
{
	int area;
	area = a * a;
	cout << "area of square " << area << endl;
	return area;
}

float circle(float r)
{
	float PIE = 3.14;
	float areac;
	areac = PIE * (r * r);
	cout << "area of circle" << areac << endl;
	return areac;
}

float triangle(float br, float h)
{
	float areat;
	areat = 0.5 * (br * h);
	cout << "area of triangle" << areat << endl;
	return areat;
}



int main()
{
	int a;
	float r;
	int  b;
	int h;
	int l;
	int br;

	cout << "enter the number of square to find area" << endl;
	cin >> a;
	square(a);

	cout << "enter the number of circle to find area" << endl;
	cin >> r;
	circle(r);

	cout << "enter the number of triangle to find area "<< endl;
	cout << "enter the number of triangle to bradth " << endl;
	cin >> b;
	cout << "enter the number of triangle to height" << endl;
	cin >> h;
	triangle(b, h);

	cout << "enter the number of rectangle to find area" << endl;
	cout << "enter the number of rectangle length" << endl;
	cin >> l;
	cout << "enter the number of rectangle breadth" << endl;
	cin >>  br;
	rectangle(l, br);

	return 0;
}