#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20,30,40,50,60,10,70,20,80,40,90,10,210};

    l.sort();

    l.unique();

    l.reverse();

    for(int val : l)
    {
        cout << val << endl;
    }


    return 0;
}