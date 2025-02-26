#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(5);
    pq.push(25);
    pq.push(100);
    pq.push(2);
    pq.push(10);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    cout << pq.size() << endl;

    return 0;
}