#include<iostream>
#include<cmath>
using namespace std;
int main(){
long n,x=0,m;
cin>>n>>m;
for(int i=1;i<=m;i++){x=x+pow(n+i,2);}
cout<<x;
}
