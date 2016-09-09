#include <iostream>
#include <cmath>
using namespace std;

int main()
   {


   
   double a, b, m, n, x, y, z;

   cout<<"Enter 3 numbers:"<<endl;
   cin>>x>>y>>z;

   m=sqrt(abs(x-1))-pow(abs(y), 1/3);
   n=1+(pow(x, 2))/2+(pow(y, 2))/4;
   a=m/n;

   b=x*(atan(z)+exp(-(x+3)));

   cout<<"a is "<<a<<", b is "<<b;





return 0;
   }