#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
  double R, r, h, s, l, v, p;
  
  cout<<"Enter R, r and h"<<endl;
  cin>>R>>r>>h;
  
  p=3.14;

  v=(p*h*(R*R+r*r+R*r))/3;
  l=sqrt(h*h+(R-r)*(R-r));
  s=p*l*(R+r)+p*(R*R+r*r);
  
  cout<<"The volume is "<<v<<". The surface area is "<<s;
  
  return 0;
}