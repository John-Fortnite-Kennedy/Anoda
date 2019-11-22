#include<iostream>
#include<cmath>
using namespace std;
int main(){
double a,n,x=0,m;
cin>>n;
for(int i=1;i<=n;i++){a=1.0/(cos(pow(x,i)));m+=a;}
cout<<m;
}
