#include <iostream>
using namespace std;
int maior(int x, int y){
int c;
   if(x>y){
       c=x;
       cout<<c;
   }else if(x<y){
       c=y;
       cout<<c;
      return c;
   }
}
int main() {
   int x,y;
   cin>>x>>y;
   maior(x,y);
    return 0;
}
