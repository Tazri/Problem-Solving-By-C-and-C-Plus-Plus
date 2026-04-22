// link : https://codeforces.com/contest/2146/problem/C
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
    string s;
    cin >> s;

    if ((s[0] == '0' && s[1] == '1') || (s[n - 1] == '0' && s[n - 2] == '1'))
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == '0' && s[i - 1] == '1' && s[i + 1] == '1')
        {
            cout << "NO" << endl;
            return;
        }
    }

    s = "1" + s;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        v[i] = i;

    vector<pair<int, int>> change;

    int l = -1;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] == '0')
        {
            if (l == -1)
            {
                l = i;
                continue;
            }

            continue;
        }

        if (l != -1)
        {
            change.push_back({l, i - 1});
            l = -1;
        }
    }

    if (l != -1)
    {
        change.push_back({l, n});
    }

    for (pair<int, int> p : change)
    {
        for (int j = p.first + 1; j <= p.second; j++)
        {
            swap(v[j], v[j - 1]);
        }
    }

    cout << "YES" << endl;
    for (int i = 1; i <= n; i++)
        cout << v[i] << " \n"[i == n];
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