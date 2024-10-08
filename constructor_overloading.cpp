#include<iostream>
using namespace std;

class Object
{
    public:
    int a,b;
    Object()
    {
        a=0;
        b=0;
        cout<<"The object obj1 is called"<<endl;
    }
    Object(int x)
    {
        a=x;
        b=0;
        cout<<"The object obj2 is called"<<endl;
    }
    Object(int x,int y)
    {
        a=x;
        b=y;
        cout<<"The object obj3 is called"<<endl;
    }

};

int main()
{
    Object obj1;
    Object obj2(5);
    Object obj3(10,20);
}