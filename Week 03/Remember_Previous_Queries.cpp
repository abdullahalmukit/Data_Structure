#include <bits/stdc++.h>
using namespace std;

void printList(list<int>& l) 
{
    cout << "L -> ";
    for (auto it : l) 
    {
        cout << it << " ";
    }
    cout << endl;

    cout << "R -> ";
    for (auto it = l.rbegin(); it != l.rend(); ++it) 
    {
        cout << *it << " ";
    }
    cout << endl;
}

void insert_at_head(list<int>& l, int value) 
{
    l.push_front(value);
}

void insert_at_tail(list<int>& l, int value)
{
    l.push_back(value);
}

void delete_at_index(list<int>& l, int index) 
{
    if (index < 0 || index >= l.size()) 
    {
        return;
    }
    auto it = l.begin();
    for (int i = 0; i < index; i++) 
    {
        it++;
    }
    l.erase(it);
}

int main() 
{
    int n;
    cin >> n;
    
    list<int> l;

    while (n--) 
    {
        int index, value;
        cin >> index >> value;

        if (index == 0) 
        {
            insert_at_head(l, value);
        } 
        else if (index == 1) 
        {
            insert_at_tail(l, value);
        } 
        else if (index == 2) 
        {
            delete_at_index(l, value) ;
        }

        printList(l);
    }
    
    return 0;
}
