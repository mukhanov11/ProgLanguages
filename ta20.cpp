#include <iostream>
#include <cmath>
using namespace std;

int main()
   {


    double x, y, z, a, b, m, n;

    cout<<"Enter 3 integer numbers:"<<endl;
    cin>>x>>y>>z;

    m=1+pow(sin(x+y), 2);
    n=2+abs(x-2*x/(1+pow(x, 2)*pow(y, 2)));
    a=m/n+x;

    b=pow(cos(atan(1/z)), 2);

    cout<<"a is "<<a<<", b is "<<b;


return 0;
   }