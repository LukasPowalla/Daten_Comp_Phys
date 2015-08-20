#include <iostream>
#include <cmath>

using namespace std;

int main(){
   double a=0;
   int d;
   cin >> d;
   for(int i=d;i>0;i--){
   	   a+=1.0/i;
	}
   cout << a << endl;
	return(0);
}
