#include<iostream>
using namespace std;

class Prepinsta
{
    int x,y;
    char c;
    public:
    void print()
    {
        cout<<"Nothing will be printed"<<endl;

    }
    void print(int a)
    {
        x=a;
        cout<<"The value of a is:"<<x<<endl;
    }
    void print(int a,int b)
    {
        x=a;
        y=b;
        cout<<"The value of x and y is:"<<x<<" & "<<y<<endl;
    }
    void print(char a)
    {
        c=a;
        cout<<"The value of x is:"<<c<<endl;
    }
};
int main()
{
    Prepinsta obj;
    obj.print();
    obj.print(10);
    obj.print(10,20);
    obj.print('A');
}