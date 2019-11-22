#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a,b,h;
double x,y;
cin>>a>>b>>h;
for(x=a;x<=b;x=x+h){y=(x*x-sin(x));
cout<<"x="<<x<<"  "<<"y="<<y<<endl;
}
}
