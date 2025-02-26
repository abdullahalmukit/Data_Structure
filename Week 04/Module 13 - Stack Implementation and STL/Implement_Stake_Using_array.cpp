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
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;

    if(st.empty() == false)
    {
        st.pop();
    }
    if(st.empty() == false)
    {
        cout << st.top() << endl;
    }

    return 0;
}