#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(5);
    pq.push(100);
    pq.push(30);
    pq.pop();
    cout << pq.top()<< endl;
    cout << pq.size() << endl;

    return 0;
}