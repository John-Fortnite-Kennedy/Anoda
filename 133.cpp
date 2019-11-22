#include <iostream>
#include <string>
using namespace std;
int main(){
int n,k,sum=0;
string u="no";
cin>>n>>k;
for(int i=1;i<=n;i++){
sum=sum+i;
if(sum==k){
u="yes";
break;}
}
cout<<u;
}
