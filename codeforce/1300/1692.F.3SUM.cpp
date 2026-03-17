// link : https://codeforces.com/problemset/problem/1692/F
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<vector<int>> patterns;

void precal()
{
    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
            for (int k = 0; k < 10; k++)
            {
                int sum = i + j + k;

                if (sum % 10 != 3)
                    continue;

                patterns.push_back({i, j, k});
            }

    // for (vector<int> p : patterns)
    // {
    //     cout << p[0] << " " << p[1] << " " << p[2] << endl;
    // }
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> mp(10, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] %= 10;

        mp[v[i]]++;
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << i << " -> " << mp[i] << endl;
    // }

    for (vector<int> &p : patterns)
    {
        // cout << p[0] << " " << p[1] << " " << p[2] << endl;
        vector<int> should(10);
        should[p[0]]++;
        should[p[1]]++;
        should[p[2]]++;

        bool ok = true;
        for (int i = 0; i < 10; i++)
        {
            if (should[i] > mp[i])
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}