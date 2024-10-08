#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        q.push(a);
    }
     cout<<"The elements are:"<<endl;
    while (q.size()>0)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    
}