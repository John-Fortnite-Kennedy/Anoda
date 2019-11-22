#include<iostream>
using namespace std;
int main(){
char a;
cin>>a;
if (a>='A' && a<='Z'){
cout<<char(a+1)<<' '<<char(a+2)<<' '<<char(a+3)<<endl;} else if (a>='a' && a<='z') {
cout<<char(a+1)<<' '<<char(a+2)<<' '<<char(a+3)<<endl;}
}
