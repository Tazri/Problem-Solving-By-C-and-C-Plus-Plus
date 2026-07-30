// link : https://codeforces.com/problemset/problem/219/A
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
    int k;
    string s;
    cin >> k;
    cin >> s;

    int n = s.size();

    if (s.size() % k != 0)
    {
        cout << -1 << endl;
        return;
    }

    map<char, int> mp;

    for (char ch : s)
    {
        mp[ch]++;
    }
    string bse;
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        int cnt = mp[ch];

        if (cnt == 0)
            continue;

        if (cnt % k != 0)
        {
            cout << -1 << endl;
            return;
        }

        int tm = cnt / k;
        for (int i = 0; i < tm; i++)
            bse.push_back(ch);
    }

    int tm = n / bse.size();

    // cout << "tm : " << tm << endl;

    for (int i = 0; i < tm; i++)
        cout << bse;
    cout << endl;
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