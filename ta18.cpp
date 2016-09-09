#include <iostream>
#include <cmath>
using namespace std;

int main()
   {



   double x, y, z, a, b, m, n, p, q;

   cout<<"Enter 3 integer numbers: "<<endl;
   cin>>x>>y>>z;
   
   m=(1+y)*(x+y/(pow(x, 2)+4));
   n=exp(-x-2)+1/(pow(x, 2)+4);
   a=m/n;
 
   p=1+cos(y-2);
   q=pow(x, 4)/2+sin(z)*sin(z);
   b=p/q;

   cout<<"a is "<<a<<", b is "<<b;



return 0;
   }  