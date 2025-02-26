#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;

    int n;
    cin >> n;
    while(n--)
    {
        int value;
        cin >> value;
        q.push(value);
    }
    // if(! q.empty())
    // {
    //     q.pop();     jodi indivitualy pop kori tahole dekhte hobe j faka ace ki na
    // }
    while(! q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}