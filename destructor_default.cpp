#include<iostream>
using namespace std;


//This is for default constructor
class A
{
  public:
   A()
   {
    cout<<"Constructor is called"<<endl;
   }
   ~A()
   {
    cout<<"Destructor is called"<<endl;
   }
};

int main()
{
    A obj1; //Constructor is called for obj1

    int i=1;
    if(i)
    {
        A obj2;//Constructor is called for obj2
        
    }//Destructor is called for obj2

}//Destructor is called for obj1