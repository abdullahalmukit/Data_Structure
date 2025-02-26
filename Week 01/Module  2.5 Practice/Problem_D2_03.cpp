#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i<n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    int q; 
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        int flag = 0;
        int l= 0;
        int r = n-1;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(a[mid] == x)
            {
                flag = 1;
                break;
            }
            else if(a[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}