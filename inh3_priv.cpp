#include <iostream>
using namespace std;

class Shape
{
   private:
   int length,breadth;
   
};

class Rectangle:public Shape{
    private:
    int length,breadth;

    public:
    int area()
    {
        return length*breadth;
    }
    void setLength(int len)
   {
    length=len;
   }
   void setBreadth(int bre)
   {
    breadth=bre;
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