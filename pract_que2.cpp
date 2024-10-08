#include<iostream>
using namespace std;

class Parent
{
    public:
    int a=10;
  
    void setc(c)
    {
      c[]=c;
    }
    protected:
    int b=20;

    private:
    char c[20];
    

};
class B:public Parent
{
    public:
    int prot_get()
    {
        return b;
    }



};

int main()
{
    B ab;
    cout<<"The public value:"<<ab.a<<endl;
    cout<<"The protected value:"<<ab.prot_get()<<endl;
    cout<<"The private value:"<<ab.pri_get();
    
}
