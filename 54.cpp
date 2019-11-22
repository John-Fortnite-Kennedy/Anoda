#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x,y,z,u=0;
cin>>x>>y>>z;
if (x<5){u+=1;}
if (y<5){u+=1;}
if (z<5){u+=1;}
if (u==2){cout<<"yes";} else {cout<<"no";}
}
