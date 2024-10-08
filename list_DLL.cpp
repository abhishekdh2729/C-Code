#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> L;
    for(int i=0;i<3;i++)
    {
        int a;
        cin>>a;
        L.push_back(a);
    }
    cout<<"The elements are:"<<endl;
    for(auto i=L.begin();i!=L.end();i++)
    {
        cout<<*i<<endl;
    }
    L.push_front(5);
    cout<<"After pushing element at front:"<<endl;
    for(auto i=L.begin();i!=L.end();i++)
    {
        cout<<*i<<endl;
    }
    L.pop_front();
    cout<<"After poping element at front:"<<endl;
    for(auto i=L.begin();i!=L.end();i++)
    {
        cout<<*i<<endl;
    }
    //cout<<L.front();
}