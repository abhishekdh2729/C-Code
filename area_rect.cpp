#include <iostream>
using namespace std;

class Rectangle
{
  public:
  int length,breadth;
};
int main()
{
  Rectangle rectObj;
  rectObj.length=10;
  rectObj.breadth=30;

  cout <<"The area of rectangle is:"<<rectObj.length*rectObj.breadth;
}
