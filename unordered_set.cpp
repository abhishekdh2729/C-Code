#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> d;
    //int a;
    d.insert(10);
    d.insert(30);
    d.insert(20);
    d.insert(40);
    d.insert(50);
    auto a=d.find(30);
    if (a!=d.end())
    {
       cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
     
    cout<<"The elements are:"<<endl;
    for(auto i=d.begin();i!=d.end();i++)
    {
      cout<<*i<<endl;
    }
    cout<<"List after removing element are:"<<endl;
    d.erase(50);
    
    for(auto i=d.begin();i!=d.end();i++)
    {
      cout<<*i<<endl;
    }
   
    

}