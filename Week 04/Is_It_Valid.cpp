#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) 
{
    stack<char> st;

    for (char ch : s) 
    {
        if (ch == '1') 
        {
            if (!st.empty() && st.top() == '0') 
            {
                
                st.pop();
            } 
            else 
            {
                st.push(ch); 
            }
        } 
        else if (ch == '0') 
        {
            if (!st.empty() && st.top() == '1') 
            {
                
                st.pop();
            } 
            else 
            {
                st.push(ch);
            }
        }
    }

    return st.empty();
}

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        string s;
        cin >> s;

        if (isValid(s)) 
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
