#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
int x,r=0,p=0,s=0,n,b,u,y;
cout<<"1 - R / 2 - P / 3 - S "<<endl;
cout<<"Number of rounds: ";
cin>>n;
for(int i=0;i<n;i++){
cin>>x;
switch(x){
case 1:u=1;cout<<'R'<<" ";r++;break;
case 2:u=2;cout<<'P'<<" ";p++;break;
case 3:u=3;cout<<'S'<<" ";s++;break;
}
cout<<"vs ";
srand(time(NULL));
x=rand()%3+1;
switch(x){
case 1:y=1;cout<<'R'<<endl;break;
case 2:y=2;cout<<'P'<<endl;break;
case 3:y=3;cout<<'S'<<endl;break;
}
cout<<"-------------------------"<<endl;
     if(u==1&&y==1){cout<<"draw"<<endl;}
else if(u==1&&y==2){cout<<"lose"<<endl;}
else if(u==1&&y==3){cout<<"win"<<endl;}
else if(u==2&&y==2){cout<<"draw"<<endl;}
else if(u==2&&y==1){cout<<"win"<<endl;}
else if(u==2&&y==3){cout<<"lose"<<endl;}
else if(u==3&&y==3){cout<<"draw"<<endl;}
else if(u==3&&y==2){cout<<"win"<<endl;}
else if(u==3&&y==1){cout<<"lose"<<endl;}
}
cout<<"Analysis:"<<endl;
cout<<"Rocks - "<<r<<" Paper - "<<p<<" Scissors - "<<s<<endl;
     if(r>p&&r>s){cout<<"i should have picked more scissors ";}
else if(r>p&&r<s){cout<<"i should have picked more rocks ";}
else if(r<p&&r>s){cout<<"i should have picked more paper ";}
}
