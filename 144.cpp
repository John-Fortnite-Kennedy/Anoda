#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main(){
int a,b,c;
for(int i=1;i<100;i++){
  for(int j=1;j<100;j++){
    for(int w=1;w<100;w++){
       if (pow(i,2)==pow(j,2)+pow(w,2)||(pow(j,2)==pow(i,2)+pow(w,2))||(pow(w,2)==pow(j,2)+pow(i,2))){cout<<i<<" "<<j<<" "<<w<<endl;}
    }
  }
}
}
