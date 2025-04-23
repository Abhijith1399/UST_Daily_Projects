
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the first num" << endl;
    cin >> a;
    cout << "enter the 2nd num" << endl;
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "after swap" << a << b << endl;
    return 0;
}
