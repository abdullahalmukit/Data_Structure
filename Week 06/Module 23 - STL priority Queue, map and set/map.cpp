#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["Mukit"] = 3;
    mp["Hera"] = 5;
    mp["Fahim"] = 3;
    mp["Sakib"] = 8;

    for(auto it = mp.begin(); it!= mp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }

    if(mp.count("prova")){
        cout << "Ache" << endl;
    }
    else{
        cout << "Nai" << endl;
    }

    return 0;
}