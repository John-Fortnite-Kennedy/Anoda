#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
string s,x,u;
cin>>s;
x=s;
reverse(s.begin(),s.end());
if (s==x){u="yes";} else {u="no";}
cout<<u;
}
