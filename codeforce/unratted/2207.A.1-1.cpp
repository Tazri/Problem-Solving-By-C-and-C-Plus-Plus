// link : https://codeforces.com/contest/2207/problem/A
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
    for (int i = 1; i < n - 1; i++)
        if (s[i - 1] == '1' && s[i + 1] == '1')
            s[i] = '1';

    int mx = 0;

    for (char ch : s)
        if (ch == '1')
            mx++;

    for (int i = 1; i < n - 1; i++)
        if (s[i - 1] == '1' && s[i + 1] == '1')
            s[i] = '0';

    int mn = 0;

    for (char ch : s)
        if (ch == '1')
            mn++;

    cout << mn << " " << mx << endl;
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