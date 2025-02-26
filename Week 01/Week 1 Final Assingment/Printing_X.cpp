// https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-06/challenges/printing-x

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {

            if (j == i && j == n / 2) 
            { 
                cout << "X";
            } 
            else if (j == i) 
            {
                cout << "\\";
            } 
            else if (j == n - i - 1) 
            {
                cout << "/";
            } 
            else 
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

