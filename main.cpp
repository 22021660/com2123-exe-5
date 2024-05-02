#include <iostream>
#include<cmath>-
using namespace std;
int main()
{
      int a,b, c, d;

cout<<"Calculate the euclidean distance between two points\n\n";
cout<<"Enter the value of x1:";
cin>>a;
cout<<"Enter the value of x2:";
cin>>b;
cout<<"Enter the value of y1:";
cin>>c;
cout<<"Enter the value of y2:";
cin>>d;

 double u= (b-a)*(b-a)+(d-c)*(d-c);
double z= sqrt(u);


cout<<"The distance between point 1 and 2 is "<< z;


}
