#include <bits/stdc++.h>
using namespace std;
int main(){
 int maxi=-1,mini=-1,max=INT_MIN,min=INT_MAX;
 string n;
 cin>>n;
 for (int i=0;i<4;i++){if ((int(n[i])-48)>max){max=(int(n[i])-48);
 maxi=i;}
if ((int(n[i])-48)<min){min=(int(n[i])-48);
mini=i;}}
 n[maxi]=char(min+48);
 n[mini]=char(max+48);
 cout<<n;
 return 0;
}
