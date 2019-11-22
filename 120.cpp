#include<iostream>
using namespace std;
int main(){
int n,maxx;
cin>>n;
maxx=n%10;
n=n/10;
 while(n>0) {
if(n%10 > maxx)
maxx=n%10;
n=n/10;
}
cout<<maxx<<endl;
}
