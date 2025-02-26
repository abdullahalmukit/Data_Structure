// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-06/challenges/sorted-2-2

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0 ; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> test(n);
        test = a;
        sort(test.begin(),test.end());
        int flag = 0;
        for(int i = 0; i<n; i++)
        {
            if(a[i]==test[i])
            {

            }
            else
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
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