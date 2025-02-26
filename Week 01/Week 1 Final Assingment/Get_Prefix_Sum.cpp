// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-06/challenges/get-prefix-sum

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i = 0; i<n; i++)
    {
        cin >> a[i];
    }
    vector<long long int> pre(n);
    pre[0] = a[0];
    for(int i = 1; i<n; i++)
    {
        pre[i] = pre[i-1] + a[i];
    }
    sort(pre.begin(),pre.end(),greater<long long int>());

    for(int i = 0 ; i< n; i++)
    {
        cout << pre[i] << " ";
    }


    return 0;
}