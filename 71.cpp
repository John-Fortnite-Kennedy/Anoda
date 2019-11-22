#include<iostream>
#include<cmath>
using namespace std;
int main(){
double a,b,s;
cin>>a>>b;
if (a>12){a=a-12;}
a=((a*60)+b)/2;
b=b*6;
if (a>b){s=a-b;} else {s=b-a;}
cout<<s<<" "<<360-s;
}
