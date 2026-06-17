// linK : https://codeforces.com/problemset/problem/2231/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

map<int, int> fd(int n)
{
    map<int, int> mp;
    int prev = -1;
    int time = 0;

    while (n > 1)
    {
        mp[n] = time;
        time++;
        prev = n;
        if (n & 1)
            n++;
        else
            n /= 2;
    }

    mp[n] = time;

    if (prev != 2)
    {
        mp[2] = time + 1;
    }

    return mp;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> prev;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i == 0)
        {
            prev = fd(v[i]);
            continue;
        }

        map<int, int> curr = fd(v[i]);
        map<int, int> nextMp;

        for (pair<int, int> p : prev)
        {
            if (curr.count(p.first))
            {
                nextMp[p.first] = p.second + curr[p.first];
            }
        }
        prev = nextMp;
    }

    int mn = -1;

    for (pair<int, int> p : prev)
    {
        if (mn == -1)
            mn = p.second;
        mn = min(p.second, mn);
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