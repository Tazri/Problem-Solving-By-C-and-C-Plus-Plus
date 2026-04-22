// link : https://codeforces.com/problemset/problem/2181/A
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

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;

    vector<string> v(n);

    vector<int> mp((int)'Z' - (int)'A' + 1, 0);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        for (char ch : v[i])
            mp[(int)ch - (int)'A']++;
    }

    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        vector<int> lcal = mp;
        vector<int> curr((int)'Z' - (int)'A' + 1, 0);

        for (char ch : v[i])
            curr[(int)ch - (int)'A']++;

        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            int chi = (int)ch - (int)'A';
            lcal[chi] -= curr[chi];
        }

        vector<int> bs = lcal;

        bool possible = true;
        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            int chi = (int)ch - (int)'A';

            int demand = curr[chi];

            lcal[chi] *= m;

            if (demand > lcal[chi])
            {
                possible = false;
                break;
            }

            lcal[chi] -= demand;
        }

        if (!possible)
        {
            ans[i] = -1;
            continue;
        }

        int mn = -1;

        for (char ch = 'A'; ch <= 'Z'; ch++)
        {
            int chi = (int)ch - (int)'A';

            if (bs[chi] == 0)
                continue;

            int tms = lcal[chi] / bs[chi];

            if (mn == -1)
                mn = tms;
            mn = min(mn, tms);
        }

        ans[i] = mn;
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}