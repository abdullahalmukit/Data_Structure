#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i = 0 ; i <n; i++)   // O(n)
    {
        for(int j = 1 ; j<n ; j *= 2)   // O(logn)
        {
            cout << "hello" << endl;
        }
    }

    return 0;
}