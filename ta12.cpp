#include <iostream>
#include <cmath>
using namespace std;

int main() {


   double a, b, x, s;

   cout<<"Enter the length of isosceles trapezoid bases a and b: "<<endl;
   cin>>a>>b;
   cout<<"Enter the angle at the larger base:"<<endl;
   cin>>x;

   s=a*b/sin(x);

   cout<<"The area of the trapezoid is "<<s;



 return 0;

}