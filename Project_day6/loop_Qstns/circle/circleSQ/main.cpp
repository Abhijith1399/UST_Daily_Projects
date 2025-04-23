#include <iostream>
using namespace std;

int main() {
    float  pie = 3.14;
    float r;
    cout << "enter the radius" << endl;
    cin >> r;
    r = 3.14 * (r * r);
    cout << "area of circle" << r << endl;
    return 0;
}