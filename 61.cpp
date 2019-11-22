#include<iostream>
#include<string>
using namespace std;
int main(){
string s,u;
int x,y,z,w;
cin>>s;
x=s[0]; y=s[1]; z=s[2]; w=s[3];
if (x==y||x==z||x==w){u="yes";} else if (y==z||y==w){u="yes";} else if (z==w){u="yes";}  else {u="no";}
cout<<u;
}
