#include<iostream>
#include<unordered_map>
#include<string.h>
using namespace std;
int main()
{
    unordered_multimap<string,int> m;
    m.insert({"banana",5});//The sorted ordwer is based on key elements
    m.insert({"apple",7});
    m.insert({"orange",2});
    m.insert({"apple",5});
    cout<<"The size of the unordered multimap is:"<<m.size()<<endl;
    cout<<"The unordered multimap elementsa are:"<<endl;
    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<"=>"<<i->second<<endl;
    }
    m.erase(m.find("apple"));
    cout<<"After deleting one element:"<<endl;
     for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<"=>"<<i->second<<endl;
    }


}