#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> d;
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    
    cout<<"The elements are:"<<endl;
    for(auto i=d.begin();i!=d.end();i++)
    {
      cout<<*i<<endl;
    }
    cout<<"After popping elements are:"<<endl;
    d.pop_front();
    d.emplace_front(10);
    for(auto i=d.begin();i!=d.end();i++)
    {
      cout<<*i<<endl;
    }
    cout<<"After sorting elements are:"<<endl;
    d.sort();//reverse(),d.remove(10) -> these 2 are also functions used in Forward list
    for(auto i=d.begin();i!=d.end();i++)
    {
      cout<<*i<<endl;
    }

}