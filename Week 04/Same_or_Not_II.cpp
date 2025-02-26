#include<bits/stdc++.h>
using namespace std;

class mystack {
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

class myQueue 
{
public:
    list<int> l;

    void push(int value) 
    {
        l.push_back(value);
    }

    void pop() 
    {
        l.pop_front();
    }

    int front() 
    {
        return l.front();
    }

    int back() 
    {
        return l.back();
    }

    int size() 
    {
        return l.size();
    }

    bool empty() 
    {
        return l.empty();
    }
};

int main() 
{
    int n, m;
    cin >> n >> m;

    mystack st;
    myQueue q;

    for (int i = 0; i < n; i++) 
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++) 
    {
        int y;
        cin >> y;
        q.push(y);
    }

    int flag = 0;

    while (!st.empty() && !q.empty()) 
    {
        int stackTop = st.top();
        int queueFront = q.front();
        if (stackTop != queueFront) 
        {
            flag = 1;
            break;
        }
        st.pop();
        q.pop();
    }

    if (!st.empty() || !q.empty()) 
    {
        flag = 1;
    }

    if (flag == 0) 
    {
        cout << "YES" << endl;
    } else 
    {
        cout << "NO" << endl;
    }

    return 0;
}
