#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
srand(time(NULL));
int c=0,a=1+(rand()%100),n;
while(c<3){cin>>n;
if(n==a){cout<<"yes"<<endl;break;}
if(c==2)break;
if(n<a){cout<<"bigger"<<endl;}
else if(n>a){cout<<"smaller"<<endl;}
c++;}
cout<<"number was - "<<a<<endl;
}
