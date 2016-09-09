#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
  double a, b, c, r, p;
  
  cout<<"Enter the leg and hypotenuse of right triangle:"<<endl;
  cin>>a>>c;
  
  b=sqrt(c*c-a*a);
  p=(a+b+c)/2;
  r=sqrt((p-a)*(p-b)*(p-c)/p);
  
  cout<<"The second leg is "<<b<<". "<<"The radius of inscribed circle is "<<r;
  
  return 0;
}