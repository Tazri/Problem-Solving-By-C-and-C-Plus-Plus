// link : https://codeforces.com/contest/988/problem/C
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
    int n;
    cin >> n;

    map<int, pair<int, int>> mp;

    for (int i = 1; i <= n; i++)
    {
        int k;
        cin >> k;
        vector<int> v(k + 1);

        int sum = 0;
        for (int j = 1; j <= k; j++)
        {
            cin >> v[j];
            sum += v[j];
        }

        map<int, int> st;

        for (int j = 1; j <= k; j++)
        {
            int x = sum - v[j];
            st[x] = j;
        }

        for (pair<int, int> p : st)
        {
            int x = p.first;
            int j = p.second;

            if (mp.count(x))
            {
                cout << "YES" << endl;
                pair<int, int> p1 = mp[x];
                cout << p1.first << " " << p1.second << endl;
                cout << i << " " << j << endl;
                return;
            }

            mp[x] = {i, j};
        }
    }

    cout << "NO" << endl;
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