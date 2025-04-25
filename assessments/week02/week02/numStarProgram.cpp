#include<iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cout << "enter the num" << endl;
    cin >> n;


    for (i =1;i <= n;i++)
        cout << "*";
    {
      
        for (j =1;j <= i-n;j++)
        {
            cout << j;

            for(k=1;)
            cout << "*";
        }
    }


    for (i =n-1;i >=n;i--)
        cout << "*";
    {

        for (j = 1;j >=i - n;j++)
        {
            cout << j;

        }
    }
    return 0;



}