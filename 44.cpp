#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x,y;
cin>>x>>y;
if(x!=10){
        if (y!=10){
            if ((x%2)==0){cout<<x+y;} else {cout<<x*y;}
} else {cout<<x*y;}
} else {cout<<x*y;}}
