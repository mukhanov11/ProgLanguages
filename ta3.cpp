#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
  double a, s, v;
  
  cout<<"Enter the length of cube edge"<<endl;
  cin>>a;
  
  v=a*a*a;
  s=4*a*a;
  
  cout<<"The volume is "<<v<<". The lateral surface area is "<<s;
  
  return 0;
}