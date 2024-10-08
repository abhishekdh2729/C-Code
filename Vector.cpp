#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    for(int i=0;i<5;i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }
    v.push_back(9);
    cout<<"The vectors are: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }

}