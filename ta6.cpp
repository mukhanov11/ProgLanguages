#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
  double a, p, s;
  
  cout<<"Enter the side of a equilateral triangle:"<<endl;
  cin>>a;
  
  p=a*3/2;
  s=sqrt(p*3*(p-a));
  
  cout<<"The area is "<<s;
  
  return 0;
}