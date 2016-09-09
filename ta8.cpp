#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
  double r1, r2, r3, r0;
  
  cout<<"Enter three parallel resistances R1, R2, R3:"<<endl;
  cin>>r1>>r2>>r3;
  
  r0=r1+r2+r3;
  
  cout<<"The resistance R0  is "<<1/r0;
  
  return 0;
}