#include<bits/stdc++.h>
using namespace std;

class mystack
{
    public:
    vector<int> v;
    void push(int value)
    {
        v.push_back(value);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    mystack st;
    
    int n;
    cin >> n;
    for(int i = 0 ; i<n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    // cout << st.top() << endl;
    // if(st.empty() == false)
    // {
    //     st.pop();
    // }
    // cout << st.size() << endl;
    while(st.empty() == false)
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}