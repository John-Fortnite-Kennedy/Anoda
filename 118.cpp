#include<iostream>
using namespace std;
int main(){
int a,s=0;
cin>>a;
while (a!=0){
cin>>a;
if ((a%2)==0)&&(a!=0){
    s++;}
}
cout<<s;
}
