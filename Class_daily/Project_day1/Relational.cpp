#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter the age"<<endl;
    cin>>age;
    if (age>18)
    {
      cout<<"you are eligible for vote";
        /* code */
    }else if(age==18)
    {
      cout<<"you are just eligible for vote";   
    }
    else{
      cout<<"you are not eligible for vote";     
    }
    return 0;

}