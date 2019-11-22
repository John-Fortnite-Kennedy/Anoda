#include <bits/stdc++.h>
using namespace std;
int main(){
for(int i=11111;i<99999;i++){
   if (((i%2)==0)&&(((i%10000)/100)==1)&&((((i/10000)+((i%10000)/1000)+((i%1000)/100)+((i%100)/10)+(i%10))%4)==0)){cout<<i<<endl;}}
}
