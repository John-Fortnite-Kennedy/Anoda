#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x,y,z,a=0,b=0,c=0;
cin>>x>>y>>z;
if((x%5)==0){a=x;}
if((y%5)==0){b=y;}
if((z%5)==0){c=z;}
if (a+b+c==0){cout<<"error";} else {cout<<a+b+c;}
}
