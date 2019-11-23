#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
using namespace std;
int main(){
int x,b;
char c;
string str;
cin>>x;
while(x>0){
srand(time(NULL));
b=rand()%26+'a';
c=char(b+(x%10));
str=str+c;
x=(x/10);
}
cout<<str;
}
