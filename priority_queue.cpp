#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(8);
    pq.push(6);
    pq.push(9);
    pq.push(20);
    pq.push(15);
    while(pq.size()>0)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
}