#include <iostream>
using namespace std;
int main(){
int n,x=0,y;
cin>>n;
for(int i=1;i<=n;i++){y=1;
for(int j=i;j<=2*i;j++){y=y*j;}x=x+y;}
cout<<x<<endl;
}
