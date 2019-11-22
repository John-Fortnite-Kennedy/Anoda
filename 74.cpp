#include <iostream>
using namespace std;
int main(){
int k,x,y;
cin>>k;
x=(k-1)/20+1;
y=((k-1)%20)/2;
cout<<((k%2)*x)+(((k+1)%2)*y);
}
