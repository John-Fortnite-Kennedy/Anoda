#include <bits/stdc++.h>
using namespace std;
int main(){
int x,y,z,w;
for (int i=1000;i<=9999;i++){
x=(i/1000);
y=(i/100)%10;
z=(i/10)%10;
w=(i%10);
if ((x!=5)&&(y!=5)&&(z!=5)&&(w!=5)&&(x!=6)&&(y!=6)&&(z!=6)&&(w!=6))
cout<<i<<endl;
}
}
