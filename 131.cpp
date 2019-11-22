#include <iostream>
using namespace std;
int func(int x){
for(int i=2;i<x;i++){
if (x%i==0){return 0;}else{continue;}}}
int main(){
int n;
cin>>n;
for(int i=1;i<n;i++){
if(func(i)&&func(i+2)){cout<<i<<" "<<i+2<<endl;}}
}
