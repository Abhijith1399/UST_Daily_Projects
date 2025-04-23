#include <iostream>
using namespace std;
int main()
{
    float math, bio, phy, chem, mala;
    float agr;
    float per;

    cout << "enter the maths mark" << endl;
    cin >> math;
    cout << "enter the biology mark" << endl;
    cin >> bio;
    cout << "enter the chemistry mark" << endl;
    cin >> chem;
    cout << "enter the physics mark" << endl;
    cin >> phy;
    cout << "enter the malayalam mark" << endl;
    cin >> mala;
    agr = math + bio + phy + chem + mala;
    cout << "Agrregation mark" << agr << endl;
    per = (agr / 500) * 100;
    cout << "percentage mark" << per << endl;
    return 0;
}