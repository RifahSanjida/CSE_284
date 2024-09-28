//Example 1: Write a C++ program to define a class BOX and create objects of this class.
#include<iostream>
using namespace std;
int main()
{
   class box{
       public:
           double l;
           double w;
           double d;
           double v;
   };

   box box1, box2;
   box1.l = 10;
   box1.w = 10;
   box1.d = 5;
   box1.v = box1.l * box1.w * box1.d;
   cout<<box1.v<<endl;

   box2.l = 15;
   box2.w = 20;
   box2.d = 10;
   box2.v = box2.l * box2.w * box2.d;
   cout<<box2.v<<endl;
}
