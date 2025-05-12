#include<iostream>
using namespace std;

int main()
{
    int num, smaller ;
    cout << "Enter the number: ";
    cin >> num;
    int digit;
    int min = 10;
    while (num != 0)
    {
        digit = num % 10;
        num = num / 10;
       // cout << digit<<endl;
        if (min > digit)
            min = digit;

    }cout << min<<endl;
    return 0;
}
