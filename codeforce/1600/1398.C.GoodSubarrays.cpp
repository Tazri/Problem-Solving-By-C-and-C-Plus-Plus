// link : https://codeforces.com/problemset/problem/1398/C
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
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> v(n + 1);
    vector<int> pre(n + 1);

    for (int i = 0; i < n; i++)
        v[i + 1] = (int)s[i] - (int)'0';

    // for (int i = 1; i <= n; i++)
    //     cout << v[i] << " ";
    // cout << endl;

    for (int i = 1; i <= n; i++)
        pre[i] += pre[i - 1] + v[i];

    // for (int i = 1; i <= n; i++)
    //     cout << pre[i] << " \n"[i == n];

    map<int, int> mp;

    mp[0 - 1]++;
    int cnt = 0;
    for (int r = 1; r <= n; r++)
    {
        int d = pre[r] - r - 1;
        if (mp.count(d))
        {
            cnt += mp[d];
        }

        mp[pre[r] - (r + 1)]++;
    }

    cout << cnt << endl;
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