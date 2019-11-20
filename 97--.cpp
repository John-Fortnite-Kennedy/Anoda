#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
int pre,n,sum;
cin>>n;
for(int i=1;i<=n;++i){pre=i; for(int j=i+1;j<=i*2;++j){pre*=j;}sum+=pre;}
cout<<sum;
}
