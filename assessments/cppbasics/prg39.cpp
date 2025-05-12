//ltrim

#include<iostream>
using namespace std;
#define max 100

int main()
{
    char str[max];
    cin.getline(str, max);
    int j=0;
    int count = 0;
    for(int i = 0; str[i]== ' '; i++)
    {
        count++;
       
    }
   
  for(int i=count;str[i]!='\0';i++)
  {
      str[j]=str[i];
      j++;
    
  }
    

  str[j]='\0';
  cout<<str;
    return 0;
}
