// link : https://codeforces.com/contest/2247/problem/A
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
    int pos = 0;
    int neg = 0;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        if (vi < 0)
            neg++;
        else
            pos++;
    }

    int d = abs(neg - pos);

    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (d == 0)
    {
        cout << "YES" << endl;
        return;
    }

    int h = n / 2;
    if ((abs(h - neg) & 1) || (abs(h - pos) & 1))
    {
        cout << "NO" << endl;
    }
    else
        cout << "YES" << endl;
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