#include <iostream>
using namespace std;
int main () {
int n,per;
cin>>n;
for(int i=1;i<=n;i++){per=0;
for(int j=1;j<(i/2+1);j++){
if(i%j==0){per+=j;}}
if(per==i){cout<<i<<endl;}}
}
