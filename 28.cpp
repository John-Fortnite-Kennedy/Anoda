#include<iostream>
#include<cmath>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int aa=a;
for(int i=0;i<5;i++){
    a+=(a*b)/100;
}
cout<<a<<endl;
a=aa+(aa*b)/100;
cout<<a;
}
