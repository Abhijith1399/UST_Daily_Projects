#include<iostream>
using namespace std;
int main()
{
    int x=20,y=46, z=300;
    int c=(x>y)?((x>z)?x:z):((y>z)?y:z);
    cout<<c<<endl;
    return 0;
}