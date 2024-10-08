#include <iostream>
using namespace std;

//Parent class, super class, base class
class Parent{
    public:
    int var1;

    private:
    int var2;

    protected:
    int var3;
    //all 3 thingd are accessible here

};

//child, sub, Derived class
class Child: public Parent{
    //public and protected are accessble here

};

int main()
{
    //only public is accessible

}