#include<iostream>
using namespace std;

class Prepinsta
{
    int x=0,y=0,z=0;
    public:
    void print()
    {
        cout<<"x:"<< x<<" y:"<< y<<" z:"<< z<<endl;
    }
    void operator ++()
    {
        x++;
        y++;
        z++;
    }
};
int main()
{
    Prepinsta p;
    cout <<"Values befor overloading:"<<endl;
    p.print();

    ++p;

    cout <<"Values after overloading:"<<endl;
    p.print();
    return 0;
    
}