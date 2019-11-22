#include<iostream>
using namespace std;
int main(){
int sum=0;
while(sum<=10) {
int r=rand()%2;
int x=r;
cout<<x;
sum=sum+x;
}
}
