#include<iostream>
#include<cmath>
using namespace std;
int main(){
int ax,ay,bx,by;
int a,b,c,d;
cout<<"length of 1st x ";cin>>a;
cout<<"length of 1st y ";cin>>b;
cout<<"length of 2nd x ";cin>>c;
cout<<"length of 2nd y ";cin>>d;
cout<<"coordinates : left/down of 1st";cin>>ax>>ay;cout<<"coordinates : right/up of 2nd";cin>>bx>>by;
cout<<"coordinates of bigger rectangle";
cout<<ax<<" "<<ay<<" "<<bx+c<<" "<<by+d;
}
