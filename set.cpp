#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> d;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        d.insert(a);
    }
    
    cout<<"The elements are:"<<endl;
    for(auto i=d.begin();i!=d.end();i++)
    {
      cout<<*i<<endl;
    }
    cout<<"List after removing element are:"<<endl;
    d.erase(d.find(5));
    
    for(auto i=d.begin();i!=d.end();i++)
    {
      cout<<*i<<endl;
    }
   
    

}