#include <iostream>
#include <cmath>
using namespace std;

int main() { 


   double a, b, c, s, p, ha, hb, hc;

   cout<<"Enter the sides of triangle:"<<endl;
   cin>>a>>b>>c;

   p=(a+b+c)/2;
   s=sqrt(p*(p-a)*(p-b)*(p-c));

   ha=2*s/a;
   hb=2*s/b;
   hc=2*s/c;

   cout<<"The heights are: ha = "<<ha<<", hb = "<<hb<<", hc = "<<hc;



return 0;

}