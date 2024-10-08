#include <iostream>
using namespace std;

class Shape
{
   protected:
   int length,breadth;

   public:
   void setLength(int len)
   {
    length=len;
   }
   void setBreadth(int bre)
   {
    breadth=bre;
   }
};

class Rectangle:public Shape{
    
    public:
    int area()
    {
        return length*breadth;
    }
};

int main()
{
    //here we had proved protected members are not accessed in main function
    //we accessed through setters
    Rectangle rect;

    rect.setLength(10);
    rect.setBreadth(20);

    cout<<"The area of rectangle is:"<<rect.area();

}