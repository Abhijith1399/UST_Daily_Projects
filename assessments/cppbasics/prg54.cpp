//55	Write a program in C++ that converts kilometers per hour to miles per hour.


#include <iostream>
using namespace std;
#include <climits>

int main() {
   
   float kmh;
   cin>>kmh;
   float mph=1;
   mph=kmh*0.621371;
   cout<<mph;
    return 0;
}
