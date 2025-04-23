#include<iostream>
using namespace std;
int main(){
int mark,rank;
cout<<"enter the mark"<<endl;
cin>>mark;
cout<<"enter the rank"<<endl;
cin>>rank;
if((mark==80)&&(rank==80)){
cout<<"firt rank";
}else if((mark>=70)||(rank>=70)){
    cout<<"second rank";
}else if((mark=50)!=(rank=50)){
    cout<<"enter invalid"<<endl;
}else{
    cout<<"enter valid"<<endl;
}
return 0;
}