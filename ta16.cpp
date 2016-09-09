#include <iostream>
#include <cmath>
using namespace std;

int main()
   {



   double x1, y1, x2, y2, l;

   cout<<"Enter the coordinates of the first point:"<<endl;
   cin>>x1>>y1;
   cout<<"Enter the coordinates of the second point:"<<endl;
   cin>>x2>>y2;

   l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

   cout<<"The length between points is "<<l;



return 0;

   }