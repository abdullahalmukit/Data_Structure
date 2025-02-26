#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;                          // Logarithmic Complexity -> O(log1)
    cin >> n;                       // Logarithmic Complexity -> O(log1)

    for(int i = 1 ; i<=n; i*= 2)    // Logarithmic Complexity -> O(logN) 
    {                     // ekhane increment e 2 * akare barche ty ta holo Logarithmic Complexity
        cout << i << endl;
    }

    return 0;                       // / Logarithmic Complexity -> O(log1)
}
