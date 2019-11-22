#include <iostream>
#include <string>
using namespace std;
int func(int *ptr){
int a,b,c,d,e,f,sum;
a=(*ptr/100000);
b=((*ptr/10000 )%10);
c=((*ptr/1000)%10);
d=((*ptr/100)%10);
e=((*ptr/10)%10);
f=(*ptr%10);
sum=a+b+c+d+e+f;
return sum;
}
int main(){
int x,y;
string u="no";
for(int i=100000;i<1000000;i++){int j=i+1;x=func(&i);y=func(&j);
if(x%13==0&&y%13==0){u="yes";}
}
cout<<u;}
