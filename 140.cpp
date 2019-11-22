#include<iostream>
using namespace std;
int main(){
int n,x,y;
cin>>n;
for(x=1;x<n;x++){
for(y=2;y<x;y++){
if(x%y==0){continue;}}
if(y==x){cout<<x<<" ";}}
}
