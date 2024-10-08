#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_front(1);
    d.push_front(2);
    d.push_back(3);
    d.push_back(4);
    cout<<"The deque elements are:";
    for(auto i=d.begin();i!=d.end();i++)
    {
      cout<<*i<<endl;
    }
    cout<<"After popping elements are:";
    d.pop_front();
    for(auto i=d.begin();i!=d.end();i++)
    {
      cout<<*i<<endl;
    }
}