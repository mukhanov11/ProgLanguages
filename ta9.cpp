#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
  double l, r, s, p;
  
  cout<<"Enter the length of circle:"<<endl;
  cin>>l;
  
  p=3.14;
  r=l/(2*p);
  s=p*r*r;
  
  cout<<"The area is "<<s;
  
  return 0;
}