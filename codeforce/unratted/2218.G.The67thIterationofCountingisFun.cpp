// link : https://codeforces.com/contest/2218/problem/G
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

int mod = 676767677;

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n);
    vector<int> time(m);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

        time[v[i]]++;
    }

    for (int i = 1; i < m; i++)
        time[i] += time[i - 1];

    int ans = 1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
            continue;

        vector<int> t;

        if (i + 1 < n && v[i + 1] < v[i])
            t.push_back(v[i + 1]);

        if (i - 1 >= 0 && v[i - 1] < v[i])
            t.push_back(v[i - 1]);

        if (t.size() == 0)
        {
            cout << 0 << endl;
            return;
        }

        if (t.size() == 1)
        {
            int neig = t.back();

            if (neig == v[i] - 1)
            {

                ans *= time[neig];
            }
            else
            {
                int d = time[v[i] - 1] - time[v[i] - 2];
                ans *= d;
            }
            ans %= mod;
            continue;
        }

        if (t[0] == t[1])
        {
            int neig = t.back();

            if (neig == v[i] - 1)
            {
                ans *= time[neig];
            }
            else
            {
                int d = time[v[i] - 1] - time[v[i] - 2];
                ans *= d;
            }
            ans %= mod;
            continue;
        }

        // int mn = min(t[0], t[1]);
        // int mx = max(t[0], t[1]);

        int d = time[v[i] - 1] - time[v[i] - 2];

        ans *= d;
        ans %= mod;
    }

    cout << ans << endl;
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