//  https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    vector <int> v2(n);

    for(int i = 0 ; i<n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0 ; i<n; i++)
    {
        cin >> v2[i];
    }
    vector <int> c;
    c = v2;
    for(int s : v)
    {
        c.push_back(s);
    }

    for(int i = 0 ; i<c.size(); i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}