// link : https://codeforces.com/contest/2224/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

int calculate(vector<int> &v)
{
    int n = v.size();
    int mex = 0;
    int sum = 0;
    int mx = 0;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            mx = v[i];
        mx = max(v[i], mx);

        sum += mx;

        st.insert(v[i]);

        while (st.count(mex))
        {
            mex++;
        }

        sum += mex;
    }

    return sum;
}

int c1(map<int, int> mp, int mx)
{
    vector<int> v;
    v.push_back(mx);
    mp[mx]--;
    if (mp[mx] == 0)
        mp.erase(mx);

    for (pair<int, int> p : mp)
    {
        int vi = p.first;
        v.push_back(vi);
        mp[vi]--;
    }

    for (pair<int, int> p : mp)
    {
        int time = p.second;
        int vi = p.first;

        for (int j = 0; j < time; j++)
            v.push_back(vi);
    }

    return calculate(v);
}

int c2(map<int, int> mp, int mx)
{
    vector<int> v;

    for (pair<int, int> p : mp)
    {
        int vi = p.first;
        v.push_back(vi);
        mp[vi]--;
    }

    vector<int> rest;

    for (pair<int, int> p : mp)
    {
        int time = p.second;
        int vi = p.first;

        for (int j = 0; j < time; j++)
            rest.push_back(vi);
    }

    sort(rest.rbegin(), rest.rend());
    for (int ri : rest)
        v.push_back(ri);

    return calculate(v);
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    map<int, int> mp;
    int mx;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;

        if (i == 0)
            mx = vi;
        mx = max(mx, vi);
        mp[vi]++;
    }

    int a1 = c1(mp, mx);
    int a2 = c2(mp, mx);
    cout << max(a1, a2) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}