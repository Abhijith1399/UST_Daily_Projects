//Write a program in C++ to find the area and circumference of a circle.

#include <iostream>
#define PI 3.14159
using namespace std;
int main() {
    
    int r;
    cin>>r;
    float circumference=1;
    circumference = 2 * PI * r;
    cout << circumference <<endl;

    return 0;
}
