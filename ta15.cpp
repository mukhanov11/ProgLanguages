#include <iostream>
#include <cmath>
using namespace std;

int main()
  {


   double a, b, c, la, lb, lc;

   cout<<"Enter the sides of triangle:"<<endl;
   cin>>a>>b>>c;

   la=sqrt(b*c*((pow((b+c), 2)-pow(a, 2))))/(b+c);
   lb=sqrt(a*c*((pow((a+c), 2)-pow(b, 2))))/(a+c);
   lc=sqrt(a*b*((pow((a+b), 2)-pow(c, 2))))/(a+b);

   cout<<"The lengths of the bisectors are: la = "<<la<<", lb = "<<lb<<", lc = "<<lc;



return 0;

   }
