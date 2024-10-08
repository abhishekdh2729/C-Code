#include<iostream>
#include<unordered_map>
#include<string.h>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m.insert({"banana",5});//The sorted ordwer is based on key elements
    m.insert({"apple",7});
    m.insert({"orange",2});
    cout<<"The size of the unordered map is:"<<m.size()<<endl;
    cout<<"The unordered map elementsa are:"<<endl;
    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<"=>"<<i->second<<endl;
    }
    m.erase("banana");
    cout<<"After deleting one element:"<<endl;
     for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<"=>"<<i->second<<endl;
    }


}