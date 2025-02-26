#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> List;
    int value;

    while (cin >> value ) 
    {
        if( value == -1)
        {
            break;
        }
        List.push_back(value);
    }

    List.sort();

    List.unique();

    for (int val : List) 
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
