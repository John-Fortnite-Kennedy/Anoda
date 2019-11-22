#include<iostream>
using namespace std;
int main(){
int a,b,c,d,e,str[4];
cin>>a;
b=a/1000;
c=(a%1000)/100;
d=a%100/10;
e=a%10;
str[0]=b;str[1]=c;str[2]=d;str[3]=e;
for(int i=0;i<4;i++){if (str[i]<5){cout<<str[i];}}for(int j=0;j<4;j++){if(str[j]>=5){cout<<str[j];}}
}
