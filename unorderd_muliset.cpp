#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_multiset<int> d;
    //int a;
    d.insert(10);
    d.insert(30);
    d.insert(30);
    d.insert(40);
    d.insert(50);

     
    cout<<"The elements are:"<<endl;
    for(auto i=d.begin();i!=d.end();i++)
    {
      cout<<*i<<endl;
    }
    cout<<"The number occured: "<<d.count(30)<<" times"<<endl;
    cout<<"List after removing element are:"<<endl;
    d.erase(d.find(30));
    
    for(auto i=d.begin();i!=d.end();i++)
    {
      cout<<*i<<endl;
    }
   
    

}