// link : https://codeforces.com/problemset/problem/1916/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;
    bool ok = true;
    int d = 1;
    for (int i = 0; i < n; i++)
    {
        int vi;
        cin >> vi;
        d *= vi;
    }

    if (2023 % d != 0)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    cout << (2023 / d);
    for (int i = 0; i < k - 1; i++)
        cout << " " << 1;
    cout << endl;
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