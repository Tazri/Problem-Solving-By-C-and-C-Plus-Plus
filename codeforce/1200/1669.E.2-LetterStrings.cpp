// link : https://codeforces.com/problemset/problem/1669/E
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
    map<string, int> mp;
    map<char, int> m0;
    map<char, int> m1;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        int sm = mp[s];
        int zeroSm = m0[s[0]];
        int oneSm = m1[s[1]];

        ans += zeroSm - sm;
        ans += oneSm - sm;

        mp[s]++;
        m0[s[0]]++;
        m1[s[1]]++;
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