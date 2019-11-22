#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
switch(y){
case (-1):
    x=x-1;
    break;
case (1):
    x=x+1;
    break;
case (0):
    x=x;
    break;
}
if (x==10){x=12;} else if (x==15){x=11;}
cout<<x;
}
