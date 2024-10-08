#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());// for Ascending order
    //sort(v.begin(),v.end(),greater<>());// for descending order
    cout<<"After sorting elements are:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    if(binary_search(v.begin(),v.end(),6))
    {
        cout<<"Present";
    }
    else
    {
        cout<<"Not present";
    }

}