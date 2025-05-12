//rtrim

#include<iostream>
using namespace std;
#define max 100

int main()
{
    char ch[max];
    int count=0;
    int j=0;
    cin.getline(ch, max);
    for(int i=0;ch[i]!=' ';i++)
    {
        ch[j]=ch[i];
        j++;
    }
    ch[j]='\0';
    cout<<ch;
    

    return 0;
}
