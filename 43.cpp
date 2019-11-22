#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x;
cin>>x;
if (x<=2||x==12){cout<<"winter";} else if (x>=3&&x<=5){cout<<"spring";}
else if (x>=6&&x<=8){cout<<"summer";} else if (x>=9&&x<=11){cout<<"autumn";}
}
