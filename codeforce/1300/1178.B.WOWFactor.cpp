// link : https://codeforces.com/problemset/problem/1178/B
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
    string s;
    cin >> s;
    int n = s.size();

    vector<int> v;
    v.push_back(0);
    vector<int> z;
    z.push_back(0);

    int len = 1;

    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            len++;
            continue;
        }

        if (s[i - 1] == 'o')
        {
            z.push_back(len);
            v.push_back(0);
        }
        else
        {
            v.push_back(len - 1);
            z.push_back(0);
        }

        len = 1;
    }

    if (s.back() == 'o')
    {
        z.push_back(len);
        v.push_back(0);
    }
    else
    {
        v.push_back(len - 1);
        z.push_back(0);
    }

    n = v.size() - 1;

    for (int i = 1; i <= n; i++)
    {
        v[i] += v[i - 1];
    }

    int sum = v.back();

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (z[i] == 0)
            continue;

        int left = v[i];
        int right = sum - v[i];
        ans += (left * right * z[i]);
    }

    cout << ans << endl;
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