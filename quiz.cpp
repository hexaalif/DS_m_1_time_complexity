#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int a[4] = {12, 13, 14, 15};
    // vector<int> v(a, a + 4);
    // cout << v[3];
    // v.insert(v.begin())

    // 4.
    // vector<int> v = {1, 2, 3, 4};
    // v.resize(2);
    // v.resize(4);
    // for (int v : v)
    // {
    //     cout << v << " ";
    // }

    // 7
    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 2, v.end());
    for (int v : v)
    {
        cout << v << " ";
    }
    return 0;
}