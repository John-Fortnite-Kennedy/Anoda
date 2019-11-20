#include <bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int n=(x-1)/20+1;
int ch=((x-1)%20)/2;
cout<<(x%2)*n+((x+1)%2)*ch;
return 0;
}
