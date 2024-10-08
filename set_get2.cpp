#include <iostream>
using namespace std;

class Rectangle  //THIS PASRT WE CAN TELL AS A ENCAPSULATION
{
  private:
  int length,breadth;
  
  public:
  //setters
  void setLength(int len);
  void setBreadth(int bre);
  int area();

  //getters
  int getLength()
  {
    return length;
  }
  int getBreadth()
  {
    return breadth;
  }

  
  
};

void Rectangle::setLength(int len)
  {
    length=len;
  }
void Rectangle::setBreadth(int bre)
  {
    breadth=bre;
  }
int Rectangle::area()
  {
    return length*breadth;
  }

int main()
{
  Rectangle rectObj;
  rectObj.setLength(10);
  rectObj.setBreadth(40);

  //cout <<"The length is:"<<rectObj.length<<endl;
  //cout <<"The breadth is:"<<rectObj.breadth<<endl;

  cout <<"The length is:"<<rectObj.getLength()<<endl;
  cout <<"The breadth is:"<<rectObj.getBreadth()<<endl;
  cout <<"The area of rectangle is:"<<rectObj.area();
}
