#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
  double a, b, m, n;
  
  cout<<"Enter the numbers a and b:"<<endl;
  cin>>a>>b;
  
  m=(a+b)/2;
  n=sqrt(a*b);
  
  cout<<"The arithmetic mean is "<<m<<". The lateral geometric mean is "<<n;
  
  return 0;
}