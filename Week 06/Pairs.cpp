#include<bits/stdc++.h>
using namespace std;

class Pair 
{
    public:
    string name;
    int num;
    Pair(string name, int num) 
    {
        this->name = name;
        this->num = num;
    }
};

class cmp 
{
    public:
    bool operator()(Pair &l, Pair &r) 
    {
        if (l.name != r.name) 
        {
            return l.name > r.name; 
        }
        return l.num < r.num; 
    }
};

int main() 
{
    int n;
    cin >> n; 
    priority_queue<Pair, vector<Pair>, cmp> pq;

    for (int i = 0; i < n; i++) 
    {
        string name;
        int num;
        cin >> name >> num;
        Pair obj(name, num);
        pq.push(obj);
    }

    while (!pq.empty()) 
    {
        cout << pq.top().name << " " << pq.top().num << endl;
        pq.pop();
    }

    return 0;
}
