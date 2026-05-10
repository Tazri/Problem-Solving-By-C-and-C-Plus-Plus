// link : https://codeforces.com/problemset/problem/1974/C
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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    map<pair<int, int>, int> mp23;
    map<pair<int, int>, int> mp13;
    map<pair<int, int>, int> mp12;
    map<pair<int, pair<int, int>>, int> mp;

    ll ans = 0;

    for (int i = 0; i < n - 2; i++)
    {
        int a1 = v[i];
        int a2 = v[i + 1];
        int a3 = v[i + 2];

        int k = mp[{a1, {a2, a3}}];
        int a2a3 = mp23[{a2, a3}];
        int a1a3 = mp13[{a1, a3}];
        int a1a2 = mp12[{a1, a2}];

        ans += ((ll)a2a3 - (ll)k);
        ans += ((ll)a1a3 - (ll)k);
        ans += ((ll)a1a2 - (ll)k);

        mp[{a1, {a2, a3}}]++;
        mp23[{a2, a3}]++;
        mp13[{a1, a3}]++;
        mp12[{a1, a2}]++;
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