#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin >> n >> q;
    vector<int> a(n);
    for(int i = 1 ; i<=n; i++)
    {
        cin >> a[i]; 
    }

    for(int i = 1 ; i<=q; i++)
    {
        int l,r;
        cin >> l >> r;
        int sum=0;
        for(int j = l ; j<= r ; j++ )
        {
            sum += a[j];
        }
        cout << sum << endl;
    }
    

    return 0;
}