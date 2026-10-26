// link : https://codeforces.com/problemset/problem/1551/B1
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
    string s;
    cin >> s;
    map<char, int> mp;

    for (char ch : s)
        mp[ch]++;

    int ans = 0;
    int d = 0;
    for (pair<char, int> p : mp)
    {
        int cnt = p.second;

        if (cnt > 1)
            ans++;
        else
            d++;
    }

    ans += (d / 2);

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