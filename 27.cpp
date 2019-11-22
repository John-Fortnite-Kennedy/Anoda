#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b,c,aa,bb;
cin>>a>>b>>c;
aa=a;
a=a+b;
bb=b;
b=c-aa;
c=aa+bb+c;
cout<<a<<" "<<b<<" "<<c;
}
