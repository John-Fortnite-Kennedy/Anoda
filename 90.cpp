#include <bits/stdc++.h>
using namespace std;
int main(){
    double x=0;
    for (int i=3;i<=111;i=i+2){x+=cos(double(i/(i+2)));}
    cout<<x;
}
