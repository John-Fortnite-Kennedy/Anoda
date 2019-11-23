#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cmath>
using namespace std;
int main(){
srand(time(NULL));
int b,x=0,y=0,z=0,w=0;
string str;
for(int i=0;i<10;i++){
b=rand()%3+1;
str=str+to_string(b);
}
cout<<str<<endl;
cout<<"a)"<<endl;
for(int i=0;i<str.length();i++){
    if(str[i]=='2'){x=x+1;}
    if(str[i]=='3'){y=y+1;}
    if(((i%2)!=0)&&(str[i]=='3')){z=z+1;}
    if(str[i]=='2'&&i<5){w=w+1;}
} cout<<sqrt(pow((x-y),2))<<endl;
cout<<"b)"<<endl;
cout<<z<<endl;
cout<<"c)"<<endl;
cout<<w<<endl;
}
