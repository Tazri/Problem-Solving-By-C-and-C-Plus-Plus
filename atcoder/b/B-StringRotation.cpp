// link : https://atcoder.jp/contests/abc103/tasks/abc103_b?lang=en
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
    string s, t;
    cin >> s >> t;

    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        int p = i;
        bool allEqual = true;
        for (int j = 0; j < n; j++)
        {
            if (s[p] != t[j])
            {
                allEqual = false;
                break;
            }
            p++;
            p %= n;
        }

        if (allEqual)
        {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
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