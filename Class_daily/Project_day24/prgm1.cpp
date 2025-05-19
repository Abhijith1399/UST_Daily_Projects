#include<iostream>
using namespace std;
typedef struct shape
{
	int length;
	int width;
  }SHAPE;





int main()
{
	SHAPE s1, s2;
	s1.length = 10;
	s1.width = 20;
	s2.length = 10;
	s2.width = 20;

	SHAPE s3;
	s3.length = s1.length + s2.length;
	s3.width = s1.width + s2.width;
	cout << s3.length<<"\t" << s3.width << endl;

	return 0;
}