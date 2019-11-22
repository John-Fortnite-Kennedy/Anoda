#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x1,y1,x,y,c=0,r;
cin>>x1>>y1>>r;
for(x=x1-r;x<=x1+r;x++){
for(y=y1-r;y<=y1+r;y++){
if(pow(x,2)+pow(y,2)<=pow(r,2))c++;}}
cout<<c;
}
