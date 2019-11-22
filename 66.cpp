#include<iostream>
#include<string>
using namespace std;
int main(){
string x,y,s;
cin>>x;
cin>>y;
x.erase(x.length()-1,1);
y.erase(y.length()-1,1);
s=x+y;
cout<<s;
}
