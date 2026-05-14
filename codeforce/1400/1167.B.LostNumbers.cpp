// link : https://codeforces.com/problemset/problem/1167/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

int query(int i, int j)
{
    cout << "? " << i << " " << j << endl;
    int ans;
    cin >> ans;
    return ans;
}

int findB(pair<int, int> p1, pair<int, int> p2)
{
    vector<int> v = {p1.first, p1.second, p2.first, p2.second};

    map<int, int> mp;

    for (int vi : v)
        mp[vi]++;

    for (pair<int, int> p : mp)
    {
        if (p.second == 2)
            return p.first;
    }
    return p1.first;
}

int findF(int a, int b, int c, int d, int e)
{
    set<int> st;
    st.insert(a);
    st.insert(b);
    st.insert(c);
    st.insert(d);
    st.insert(e);

    vector<int> arr = {4, 8, 15, 16, 23, 42};

    for (int ai : arr)
    {
        if (!st.count(ai))
            return ai;
    }
    return a;
}

void _DIBBA(int _DIBBA_NO)
{
    vector<int> arr = {4, 8, 15, 16, 23, 42};
    map<int, pair<int, int>> mp;

    for (int i = 0; i < arr.size(); i++)
        for (int j = i + 1; j < arr.size(); j++)
            mp[arr[i] * arr[j]] = {arr[i], arr[j]};

    int ab = query(1, 2);
    int bc = query(2, 3);
    int cd = query(3, 4);
    int de = query(4, 5);
    int b = findB(mp[ab], mp[bc]);

    int a = ab / b;
    int c = bc / b;
    int d = cd / c;
    int e = de / d;
    int f = findF(a, b, c, d, e);

    cout << "! " << a << " " << b << " " << c << " " << d << " " << e << " " << f << endl;
}

int32_t main()
{

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}