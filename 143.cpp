#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main(){
srand(time(NULL));
int x,y,z;
x=1+(rand()%100);
y=1+(rand()%100);
z=1+(rand()%100);
if(x!=y&&x!=z&&z!=y){cout<<x<<" "<<y<<" "<<z;} else {main();}
}
