#include <iostream>
#include <cmath>

using namespace std;

int main(){
   double a=0;
   int d;
   cin >> d;
   for(int i=1;i<=d;i++){
   	   a+=1.0/i;
   }
   cout << a;
   return(0);
}
