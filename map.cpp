#include<iostream>
#include<map>
#include<string.h>
using namespace std;
int main()
{
    map<string,int> m;

    // There are 3 ways to insert an kay value pair into a map
    m.insert(pair<string,int> ("Apple",3));
    m.insert(make_pair("Banana",10));
    m.insert({"Orange",5});
    cout<<"The size of the map is:"<<m.size()<<endl;
    for(auto i=m.begin();i!=m.end();i++)
    {
       cout<<i->first<<"=>"<<i->second<<endl;
    }
}