#include <iostream>
#include <string>
using namespace std;
int main(){
string str;
int x=1000,y,i;
for(i=x;i<10000;i++){
str=std::to_string(i);
if(str[0]==str[1]||str[0]==str[2]||str[0]==str[3]||str[1]==str[2]||str[1]==str[3]||str[2]==str[3]){cout<<"error";} else {cout<<i;}
}
}
