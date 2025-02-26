#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist  = {10,20,30,20};
    list<int> list1 ;
    list1 = mylist;
    // assign(mylist.begin(),mylist.end());

    mylist.push_back (40);
    mylist.push_front(5);

    mylist.pop_back();
    mylist.pop_front();

    mylist.insert(next(mylist.begin(),1),15);
    mylist.insert(next(mylist.begin(),2),90);
    mylist.erase(next(mylist.begin(),2));

    list<int> youtList = {90,100,110,130};

    // mylist.erase(next(mylist.begin(),1),next(mylist.begin(),3));

    replace(mylist.begin(),mylist.end(),20,100);

    auto it = find(mylist.begin(),mylist.end(),100);

    if( it == mylist.end())
    {
        cout << "Not Found" << endl;
    }
    else 
    {
        cout << "Found" << endl;
    }

    for(int value : mylist)
    {
        cout << value << endl;
    }

    return 0;
}