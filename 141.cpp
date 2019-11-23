#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;
int main(){
srand(time(NULL));
int b,x=0,y=0;
string str;
for(int i=0;i<i+1;i++){
b=rand()%3;
str=str+to_string(b);
    if(str[i]=='2'){x=x+1;}
    if(str[i]=='0'){y=y+1;}
    if(x==y){break;}
}cout<<str<<endl;
}
