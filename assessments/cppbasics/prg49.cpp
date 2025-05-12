//48	Write a Program for Decimal binaryConversion

#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    
    int num;
    cin>>num;
    int count=0;
    int binary=0;
    int digit=0;
    while(num>0)
    {
        digit=num%2;
        binary+= digit*pow(10, count);  count++;
        num/=2;
     
      
      
    }
         cout<<binary;
    return 0;
}