// link : https://codeforces.com/problemset/problem/2189/C1
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
    vector<int> v(n + 1);

    for (int i = 2; i <= n - 1; i++)
    {
        if (i % 2 == 0)
            v[i] = i + 1;
        else
            v[i] = i - 1;
    }

    v[n] = 1;

    if (n & 1)
        v[1] = n - 1;
    else
        v[1] = n;

    for (int i = 1; i <= n; i++)
        cout << v[i] << " \n"[i == n];
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