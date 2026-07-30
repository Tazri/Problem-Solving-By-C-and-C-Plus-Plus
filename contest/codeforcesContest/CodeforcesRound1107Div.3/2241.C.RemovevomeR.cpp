// link : https://codeforces.com/contest/2241/problem/C
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

    int alt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            alt++;
    }

    if (alt == 2)
        cout << 2 << endl;
    else
        cout << 1 << endl;
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