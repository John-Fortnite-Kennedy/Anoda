#include <iostream>
using namespace std;
int main(){
int x1,x2,x3,y1,y2,y3,a1,a2,b1,b2;
cin>>x1>>y1>>a1>>b1;
cin>>x2>>y2>>a2>>b2;
cout<<"a";
if((x2<=x1&&(x2+a2)>=x1)&&(x2<=(x1+a1)&&(x2+a2)>=(x1+a1))&&(y2<=y1&&(y2+b2)>=y1)&&(x2<=(y1+b1)&&(y2+b2)>=(y1+b1))){cout<<"Yes";}else{cout<<"No";}
cout<<endl;
cout<<"b";
if((x2<=x1&&(x2+a2)>=x1)&&(x2<=(x1+a1)&&(x2+a2)>=(x1+a1))&&(y2<=y1&&(y2+b2)>=y1)&&(x2<=(y1+b1)&&(y2+b2)>=(y1+b1))){cout<<"First to second";}else if
((x1<=x2&&(x1+a1)>=x2)&&(x1<=(x2+a2)&&(x1+a1)>=(x2+a2))&&(y1<=y2&&(y1+b1)>=y2)&&(x1<=(y2+b2)&&(y1+b1)>=(y2+b2))){cout<<"Second to first";}else{cout<<"No one";}
cout<<endl;
cout<<"c";
if((max(x1,x2)<=min(x1+a1,x2+a2))&&(max(y1,y2)<=min(y1+b1,y2+b2))){cout<<"intersect";}else{cout<<"do not intersect";}
}
