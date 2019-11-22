#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x;
cin>>x;
if (x>=2&&x<=5){x+=10;cout<<x;} else if (x>=7&&x<=40){x-=100;cout<<x;}
else if (x>3000||x<0){x=3*x;cout<<x;} else {x=NULL;cout<<x;}
}
