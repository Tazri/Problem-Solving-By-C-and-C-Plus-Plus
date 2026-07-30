// link : https://codeforces.com/contest/2241/problem/D
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
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        v[i] = b[i] - a[i];
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (v[i] > 0)
            continue;
        v[i - 1] += v[i];
    }

    if (v[0] < 0)
        cout << "NO" << endl;
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