#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int n;
void func(int b){
srand (time(NULL));
b=rand()%3+1;
cout<<"computer---------------"<<endl;
switch (b){
    case(1):
    if((n-b)>=0){
        n=n-b;
        cout<<n<<" left"<<endl;
        if(n==0){cout<<"loser";}
    } else {cout<<"no"<<endl;func(b);}
    break;
    case(2):
    if((n-b)>=0){
        n=n-b;
        cout<<n<<" left"<<endl;
        if(n==0){cout<<"loser";}
    } else {cout<<"no"<<endl;func(b);}
    break;
    case(3):
        if((n-b)>=0){
        n=n-b;
        cout<<n<<" left"<<endl;
        if(n==0){cout<<"loser";}
    } else {cout<<"no"<<endl;func(b);}
    break;}
}
void funk(int b){
    cout<<"your turn-------------------"<<endl;
cin>>b;
switch (b){
    case(1):
    if((n-b)>=0){
        n=n-b;
        cout<<n<<" left"<<endl;
        if(n==0){cout<<"winner";}
    } else {cout<<"no"<<endl;func(b);}
    break;
    case(2):
    if((n-b)>=0){
        n=n-b;
        cout<<n<<" left"<<endl;
        if(n==0){cout<<"winner";}
    } else {cout<<"no"<<endl;func(b);}
    break;
    case(3):
        if((n-b)>=0){
        n=n-b;
        cout<<n<<" left"<<endl;
        if(n==0){cout<<"winner";}
    } else {cout<<"no"<<endl;func(b);}
    break;}
}
int main(){
int a;
bool l=true;
cin>>n;
while (n!=0){
while (n!=0){
if(n==1||n==2||n==3){cout<<"loser"<<endl;l=false;break;} else{
func(a);
break;
}}
while (n!=0){
if(l==true){
funk(a);
break;}
}}
}
