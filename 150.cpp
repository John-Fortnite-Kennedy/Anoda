#include <bits/stdc++.h>
#include <ctime>
using namespace std;
int main(){
srand(time(NULL));
int n=rand()%(20-6+1)+6;
int x=0,y=0,z=0,ss;
int str[n];
for(int i=0;i<n;i++){
ss=rand()%(4-0+1)+0;
if(ss==0&&x!=1){x++;str[i]=ss;continue;}
if(ss==1&&y<3){y++;str[i]=ss;continue;}
if(ss==3&&z<=5){z++;str[i]=ss;continue;}
if(ss==0&&x==1){while(ss==0){ss=rand()%(4-0+1)+0;}}
if(ss==3&&z==5){while(ss==3){ss=rand()%(4-0+1)+0;}}
str[i]=ss;}
if(x==0){for(int i=0;i<n;i++){
if(str[i]==2||str[i]==4){str[i]=0;break;}}}
if(y<2){for(int i=0;i<n;i++){
if(str[i]==2||str[i]==4){str[i]=1;break;}}}
for(int i=0;i<n;i++){if(str[i]==0){cout<<'_';}
if(str[i]==1){cout<<char(rand()%(90-65+1)+65);}
if(str[i]==2){cout<<char(rand()%(122-97+1)+97);}
if(str[i]==3){cout<<char(rand()%(57-48+1)+48);}
if(str[i]==4){cout<<char(rand()%(47-33+1)+33);}}
}
