#include <iostream>
#include <cmath> 
using namespace std;
 
int main()  
{ 


  double a, b, c, h, s, p, v;

  cout<<"Enter the sides of the basis of the pyramid:"<<endl;
  cin>>a>>b>>c;
  p=(a+b+c)/2;
  s=sqrt(p*(p-a)*(p-b)*(p-c));
  cout<<"Enter the height of the pyramid:"<<endl;
  cin>>h;
  v=(s*h)/3;
  cout<<"The Volume of the pyramid is "<<v;

  
return 0;
 
}