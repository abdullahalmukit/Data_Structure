#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0 ;

    // // Using loop
    // for(int i = 1 ; i<=n; i++)
    // {
    //     sum += i;
    // }

    // Using formula

    sum = (n*(n+1))/2;



    cout << sum;

    return 0;
}