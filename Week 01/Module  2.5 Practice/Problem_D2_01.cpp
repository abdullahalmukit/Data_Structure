//  https://docs.google.com/document/d/1SInJU7vWMgmLO-lulcQ2aGAeLze-0632fS8Iz-14t_A/edit?tab=t.0#heading=h.abpjrfbuanqx

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i<n; i++)
    {
        cin >> a[i];
    }
    vector<int> pre(n);
    pre[0] = a[0];
    for(int i = 1 ; i<n; i++)
    {
        pre[i] = pre[i-1] +a[i];
    }
    for(int i = 0 ; i<n; i++)
    {
        cout << pre[i] << " ";
    }

    return 0 ;
}