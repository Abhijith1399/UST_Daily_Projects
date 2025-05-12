//49	Write a Program for Decimal Octal Conversion

#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    
    int num;
    cin>>num;
    int count=0;
    int octal=0;
    int digit=0;
    while(num>0)
    {
        digit=num%8;
        octal+= digit*pow(10, count);  count++;
        num/=8;
     
      
      
    }
         cout<<octal;
    return 0;
}