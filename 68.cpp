#include<iostream>
#include<cmath>
using namespace std;
int main(){
string o1=" ";
int a,b,c,d,o;
cin>>a>>b>>c;
d=pow(b,2)-(4*a*c);
if (d<0){o=0;} else if (d==0){o=(-b)/(2*a);} else {o=(-b-sqrt(d))/(2*a);o1=(-b+sqrt(d))/(2*a);}
cout<<o<<" "<<o1;
}
