#include <iostream>
#include <cmath>
using namespace std;

int main()
   {


   double x, y, z, a, b, m, n;
   
   cout<<"Enter 3 integer numbers:"<<endl;
   cin>>x>>y>>z;

   m=2*cos(x-M_PI/6);
   n=0.5+pow(sin(y), 2);
   a=m/n;

   b=1+pow(z, 2)/(3+pow(z, 2)/5);

   cout<<"a is "<<a<<", b is "<<b;


return 0;
   }