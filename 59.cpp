#include<iostream>
#include<string>
using namespace std;
int main(){
string s,u;
cin>>s;
if (int(s[0])>int(s[1])){if (int(s[1])>int(s[2])){if (int(s[2])>int(s[3])){u="yes";} else {u="no";} } else {u="no";}} else {u="no";}
cout<<u;
}
