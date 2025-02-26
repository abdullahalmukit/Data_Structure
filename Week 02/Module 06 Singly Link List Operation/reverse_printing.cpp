#include<bits/stdc++.h>
using namespace std;
void rev(int i ,int n)
{
    if(i>n)
    {
        return;
    }
    cout << i << endl; // soja print korbe
    rev(i+1,n);
    cout << i << endl;  // ulta print korbe
}
int main()
{
    int n;
    cin >> n;
    rev(1,n);

    return 0;
}