#include <iostream>
#include <cmath>
using namespace std;

int main() 
   {


     double a, b, c, ma, mb, mc;

     cout<<"Enter the sides of triangle:"<<endl;
     cin>>a>>b>>c;

     ma=0.5*sqrt(2*(pow(b, 2)+pow(c, 2))-pow(a, 2));
     mb=0.5*sqrt(2*(pow(a, 2)+pow(c, 2))-pow(b, 2));
     mc=0.5*sqrt(2*(pow(a, 2)+pow(b, 2))-pow(c, 2));

     cout<<"The length of the medians are: ma = "<<ma<<", mb = "<<mb<<", mc = "<<mc;



return 0;

    }