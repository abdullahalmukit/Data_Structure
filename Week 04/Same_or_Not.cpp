#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int m;
    cin >> n >> m;
    if(n!=m)
    {
        cout << "NO" << endl;
        return 0;
    }
    stack<int> st;
    queue<int> q;
    while(n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while(m--)
    {
        int y ;
        cin >> y;
        q.push(y);
    }
    int flag = 0;
    while(!st.empty() || !q.empty())
    {
        int a = st.top();
        int b = q.front();
        if(a != b)
        {
            flag = 1;
            break;
        }
        st.pop();
        q.pop();

    }
    if(flag == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}