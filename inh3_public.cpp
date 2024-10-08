#include <iostream>
using namespace std;

class Shape
{
   public:
   int length,breadth;
};

class Rectangle:public Shape{
    //here we had proved public is accessible in child and main 
    public:
    int area()
    {
        return length*breadth;
    }
};

int main()
{
    Rectangle rect;

    rect.length=10;
    rect.breadth=20;

    cout<<"The area of rectangle is:"<<rect.area();

}