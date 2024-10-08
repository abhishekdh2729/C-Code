#include<iostream>
#include<map>
#include<string.h>
using namespace std;
int main()
{
    multimap<string,int> m;
    m.insert({"banana",5});//The sorted ordwer is based on key elements
    m.insert({"apple",7});
    m.insert({"banana",2});
    m.insert({"orange",2});
    cout<<"The size of the multimap is:"<<m.size()<<endl;
    cout<<"The multimap elementsa are:"<<endl;
    for(auto i=m.begin();i!=m.end();i++)
    {
        cout<<i->first<<"=>"<<i->second<<endl;
    }

}