#include<iostream>
#include<cmath>
using namespace std;
int main(){
double a=0.1,x=1,b=0.2;
cout<<pow((pow(x,2)+b),1/5)-(pow(b,2)*(sin(x+a)*sin(x+a)*sin(x+a)))/x;
}
