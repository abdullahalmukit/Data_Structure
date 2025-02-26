#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    int n;
    cin >> n;
    while(n--)
    {
        int value;
        cin >> value;
        st.push(value);
    }
    while(!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}