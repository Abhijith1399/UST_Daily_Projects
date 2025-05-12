//Write a Program to Count the Sum of Numbers in a String


#include<iostream>
using namespace std;

#define MAX 100

int main()
{
    char ch[MAX];
    int count = 0;
    cin.getline(ch, MAX);
    int i,j;
     int sum=0;
    char num[11]="0123456789";
    while(ch[count] != '\0')
    {
        count++; 
       
    }
// cout << count ;
 
 for(i=0;i<count;i++)
 {
     for(j=0;j<11;j++)
     
     {
     if(ch[i]==num[j])
     {
        sum+=j; 
       // cout<<sum;
     }
     }
 }
 cout<<sum;
    return 0;
}
