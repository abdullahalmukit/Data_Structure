//  https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> a(26);

    for(int i = 0 ; i<s.size(); i++)
    {
        a[s[i]-'a'] += 1;   
    }
    for(int i = 0 ; i<26; i++)
    {
        if(a[i] != 0)
        {
            char ch = i+'a';
            cout << ch << " : " << a[i] << endl;
        }
    }

    return 0;
}