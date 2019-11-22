#include<iostream>
#include<string>
using namespace std;
int main(){
int n;
string u="Yes";
cin>>n;
for(int i=2;i<=n/2;i++){
if(n%i==0){u="No";}}
cout<<u;
}
