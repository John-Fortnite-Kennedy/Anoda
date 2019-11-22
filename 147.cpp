#include<iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
srand(time(NULL));
for(int i=0;i<7;i++){
for(int j=0;j<7;j++){
cout<<char('a'+(rand()%26))<<' ';}
cout<<endl;}
}
