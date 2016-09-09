#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
  double r, R, s, p;
  cout<<"Enter the outer radius (more than 20) of the ring:"<<endl;
  cin>>R;
  
  r=20;
  p=3.14;

  if (R>20) {  
  s=p*(R*R-r*r);
  cout<<"The area of the ring is "<<s;
  
 } else {
  cout<<"Outer radius is less than 20"<<endl;
 } 
  
  
  return 0;
}