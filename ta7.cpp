#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  
  double a, b, m, n;
  
  cout<<"Enter two numbers: "<<endl;
  cin>>a>>b;

  m=(abs(a)+abs(b))/2; 
  n=sqrt(abs(a)*abs(b));

  cout<<"The arithmetic mean of modules is "<<m<<". "<<"The geometric mean of modules is "<<n;


  return 0;
}