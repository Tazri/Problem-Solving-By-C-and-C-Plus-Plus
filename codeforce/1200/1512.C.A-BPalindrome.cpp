// link : https://codeforces.com/problemset/problem/1512/C
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
    int a, b;
    cin >> a >> b;
    int n = a + b;

    string s;
    cin >> s;

    vector<pair<int, int>> v;

    int l = 0;
    int r = n - 1;

    while (l <= r)
    {
        if (s[l] == '?' && s[r] == '?')
        {
            v.push_back({l, r});
            l++;
            r--;
            continue;
        }

        if (s[l] == '?')
            s[l] = s[r];
        else if (s[r] == '?')
            s[r] = s[l];

        if (s[l] != s[r])
        {
            cout << -1 << endl;
            return;
        }

        if (s[l] == '0')
        {
            if (l == r)
                a--;
            else
                a -= 2;
        }
        else
        {
            if (l == r)
                b--;
            else
                b -= 2;
        }
        l++;
        r--;
    }

    if (a < 0 || b < 0)
    {
        cout << -1 << endl;
        return;
    }

    for (pair<int, int> p : v)
    {
        if (p.first == p.second)
        {
            if (a > b)
            {
                a--;
                s[p.first] = '0';
            }
            else
            {
                b--;
                s[p.first] = '1';
            }
            continue;
        }

        if (a > b)
        {
            a -= 2;
            s[p.first] = '0';
            s[p.second] = '0';
        }
        else
        {
            b -= 2;
            s[p.second] = '1';
            s[p.first] = '1';
        }
    }

    if (a != 0 || b != 0)
    {
        cout << -1 << endl;
        return;
    }

    cout << s << endl;
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