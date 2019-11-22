#include <bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int x,y;
for(int i=a;i<b;i++){x=0;
for(int k=1;k<i;k++){
if((i%k)==0){
x+=k;}}
for(int j=i+1;j<=b;j++){y=0;
for(int k=1;k<j;k++){
if((j%k)==0){
y+=k;}}
if((j==x)&&(i==y)){
cout<<i<<" "<<x<<endl;}}}}
