#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "*" << endl;
    for (int i = 1;i <= n;i++)
    {
        cout << "*";
        for (int j = 1;j <= i;j++)

        {
            cout << j;
        }

        for (int k = i - 1;k >= 1;k--)
        {
            cout << k;

        }
        cout << "*";
        cout << endl;
    }
    //second half
    for (int i = 0;i <= n;i++)
    {
        cout << "*";
        for (int l = 1;l <= n - i;l++)
        {
            cout << l;
        }
        for (int m = n - 1;m <= 1;m--)
        {
            cout << m;
        }
    
    }
        

        cout << endl;
    }




    return 0;

}
