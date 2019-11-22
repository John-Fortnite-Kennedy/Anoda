#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
int x,y,i;
cin>>y;
for(x=1;x<y;x++){
for(i=2;i<x;i++){if(x%i==0){break;}}
if(i==x){cout<<x<<" ";}}}
