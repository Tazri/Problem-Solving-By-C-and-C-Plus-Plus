// link : https://codeforces.com/problemset/problem/2126/E
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

    vector<int> pre(n);
    vector<int> suff(n);

    for (int i = 0; i < n; i++)
        cin >> pre[i];

    for (int i = 0; i < n; i++)
        cin >> suff[i];

    int g = suff[0];

    if (suff[0] != g || pre[n - 1] != g || gcd(pre[0], suff[0]) != g || gcd(pre[n - 1], suff[n - 1]) != g)
    {
        cout << "NO" << endl;
        return;
    }

    for (int i = 1; i < n; i++)
        if (gcd(pre[i], pre[i - 1]) != pre[i])
        {
            cout << "NO" << endl;
            return;
        }

    for (int i = n - 2; i >= 0; i--)
        if (gcd(suff[i], suff[i + 1]) != suff[i])
        {
            cout << "NO" << endl;
            return;
        }

    for (int i = 0; i < n - 1; i++)
    {
        if (gcd(pre[i], suff[i + 1]) != g)
        {
            cout << "NO" << endl;
            return;
        }
    }

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