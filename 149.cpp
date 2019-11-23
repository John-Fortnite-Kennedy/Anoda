#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;
int main(){
srand(time(NULL));
int x=0,r,n;
string str;
bool u=true;
char c;
n=rand()%10;
if(n<3)n=rand()%3+3;
while(u==true){
for(int i=0;i<n;i++){
r=rand()%15;
c='!'+r;
str=str+c;
if(str[i]=='!'){x=x+1;}
if(x==2){u=false;break;}}}
cout<<str<<endl;
}

