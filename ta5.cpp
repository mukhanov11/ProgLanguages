#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
  double a, b, c, s;
  
  cout<<"Enter the legs a and b of a right triangle:"<<endl;
  cin>>a>>b;
  
  c=sqrt(a*a+b*b);
  s=(a*b)/2;
  
  cout<<"The hypotenuse is "<<c<<". "<<"The area is "<<s;
  
  return 0;
}
