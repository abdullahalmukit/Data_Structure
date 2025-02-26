#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0 ; i<n; i++)
    {
        cin >> a[i];
    }
    
    int count = 0;

    for(int i = 0; i<n; i++)
    {
        if(find(a.begin(),a.end(),a[i]+1) != a.end())
        {
            count++;
        }
              
    }
    cout << count << endl;

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for(int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
    
//     int count = 0;

//     for(int i = 0; i < n; i++)
//     {
//         auto it = find(a.begin(), a.end(), a[i] + 1);
//         if(it == a.end())
//         {
//             // Do nothing, as the element is not found
//         }
//         else
//         {
//             count++; // Increment count if found
//         }       
//     }

//     cout << count << endl; // Print the total count

//     return 0;
// }
