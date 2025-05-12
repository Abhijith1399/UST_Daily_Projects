//54	Write a program in C++ to convert temperature in Fahrenheit to Celsius.

#include <iostream>
using namespace std;
#include <climits>

int main() {
   
   float celcious;
   cin>>celcious;
   float fahrenheat=1;
   fahrenheat=(celcious*9.0/5.0)+32;
   cout<<fahrenheat;
    return 0;
}
