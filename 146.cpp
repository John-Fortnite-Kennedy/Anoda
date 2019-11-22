#include<iostream>
using namespace std;
int main(){
int n=0;
for(char i='a'; i<='z'; i++) {
if(((n%5)==0)&&(n!=0)){cout<<endl;}
cout<<i<<' ';
n++;}
}
