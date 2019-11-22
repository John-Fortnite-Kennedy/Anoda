#include<iostream>
#include<cmath>
using namespace std;
int main(){
double n,x=1;
cin>>n;
for(int i=2;i<=n;i++){x=x+1.0/i;}
cout<<x;
}
