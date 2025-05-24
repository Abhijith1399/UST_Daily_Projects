#include<iostream>
using namespace std;
#define max 100
int main()
{

	char ch[max];
	int count=0;
	int flg = 0;
	cout << "enter the elements" << endl;
	cin.getline(ch, max);
	while (ch[count] != '\0')
	count++;
	//cout << count;
	for (int i = 0;i < count;i++)
	{
		cout << ch[i];

		if(ch[i] == ' ')
		{
			flg++;
			cout << flg;
			cout << ch[i] << endl;
		}
		
		//break;
		//for (int i = 0;i<=flg+1;i++)
	//	{
			//cout << ch[i] << endl;
		
		//}
	
		
	}
		return 0;
}
