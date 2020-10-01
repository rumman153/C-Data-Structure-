// C++ program for illustration
// of map::find() function
#include <bits/stdc++.h>
using namespace std;

int main()
{

    // initialize container
    map<int, int> mp;

    map<int, int>::iterator itr;

    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 20 });
    mp.insert({ 4, 50 });
    mp.insert({ 4, 90 }); //will execute but will show no error.

     for ( itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first
             << '\t' << itr->second << '\n';

}
