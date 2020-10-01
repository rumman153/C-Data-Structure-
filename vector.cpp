// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> g1;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Output of begin to end: ";

     vector<int>::iterator i;
    for (i = g1.begin(); i != g1.end(); ++i)
        cout << *i << " ";

    cout<<endl;
cout << "Output of end to begin: ";
    for (i = g1.end()-1; i != g1.begin()-1; --i)
        cout << *i << " ";

    return 0;
}
