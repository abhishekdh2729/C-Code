#include<iostream>
using namespace std;

class Demo
{
    public:
    int i;
    float f;

    Demo(int val,float val2)
    {
        i=val;
        f=val2;
    }

};

int main()
{
    Demo demo(100,1.5);
    Demo demo2(200,2.5);

    cout <<demo.i<< "and" <<demo.f<<endl;
    cout <<demo2.i<< "and" <<demo2.f<<endl;

}