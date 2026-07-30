// link : https://codeforces.com/contest/2236/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int a, b, x;
    cin >> a >> b >> x;

    vector<int> va;
    vector<int> vb;

    va.push_back(a);
    while (a)
    {
        a /= x;
        va.push_back(a);
    }

    vb.push_back(b);
    while (b)
    {
        b /= x;
        vb.push_back(b);
    }

    int mn = INT32_MAX;
    for (int i = 0; i < va.size(); i++)
    {
        for (int j = 0; j < vb.size(); j++)
        {
            int take = i + j + abs(va[i] - vb[j]);
            mn = min(mn, take);
        }
    }

    cout << mn << endl;
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