// link : https://codeforces.com/contest/2254/problem/B
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
    int len = 1;
    vector<pair<char, int>> v;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            len++;
        else
        {
            v.push_back({s[i - 1], len});
            len = 1;
        }
    }
    v.push_back({s.back(), len});

    if (v.size() <= 2)
    {
        cout << v.size() << endl;
        return;
    }

    int ans = v.size();

    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i].second == 1)
        {
            if (v[i - 1].first == v[i + 1].first)
            {
                ans = min(ans, ((int)v.size() - 2));
            }
            else
            {
                ans = min(ans, ((int)v.size() - 1));
            }
        }
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