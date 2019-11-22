#include<iostream>
#include<string>
using namespace std;
int main(){
int x,y,z,x1,y1,z1;
string s;
cin>>x>>y>>z;
cin>>x1>>y1>>z1;
if (z<z1){s="yes";} else if (z==z1){
        if (y<y1){s="yes";} else if (y==y1){
         if (x<x1){s="yes";}  else {s="no";} } else {s="no";} } else {s="no";}
cout<<s;
}
