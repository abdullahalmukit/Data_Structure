#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {20,30,40,50,60,10,70,80,90,10,210};

    l.remove(10);

    for(int val : l)
    {
        cout << val << endl;
    }


    return 0;
}