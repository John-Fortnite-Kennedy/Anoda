#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x,y,z,a,u=0;
cin>>x>>y>>z>>a;
if ((x%2)==0){x=x;}else {x=0;}
if ((y%2)==0){y=y;}else {y=0;}
if ((z%2)==0){z=z;}else {z=0;}
if ((a%2)==0){a=a;}else {a=0;}
if (x==0&&y==0&&z==0&&a==0){cout<<"not found";u=1;}
if (u==0){
if (max(x,y)>max(z,a)) {cout<<max(x,y);} else {cout<<max(z,a);}}
}
