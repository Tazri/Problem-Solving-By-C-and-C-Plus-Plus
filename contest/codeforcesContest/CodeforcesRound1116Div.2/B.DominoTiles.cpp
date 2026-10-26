// link : https://codeforces.com/contest/2256/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<string> patterns;

void precal()
{
    string p = "0011";
    int n = 3 * (int)(1e5);
    patterns = vector<string>(p.size(), string(n + 1, ' '));

    for (int pi = 0; pi < p.size(); pi++)
    {
        int index = pi;

        for (int i = 0; i <= n; i++)
        {
            patterns[pi][i] = p[index];
            index++;
            index %= p.size();
        }
    }
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;

    for (int pi = 0; pi < patterns.size(); pi++)
    {
        bool ok = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '?')
                continue;

            if (s[i] != patterns[pi][i])
            {
                ok = false;
                break;
            }
        }

        if (ok)
            cnt++;
    }

    cout << cnt << endl;
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