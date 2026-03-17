// link : https://codeforces.com/problemset/problem/1672/C
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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int cnt = 0;
    int eq = 0;

    for (int i = 1; i < n; i++)
        if (v[i] == v[i - 1])
            eq++;

    if (eq <= 1)
    {
        cout << 0 << endl;
        return;
    }

    int fi = 0;
    int li = 0;

    for (int i = 1; i < n; i++)
        if (v[i] == v[i - 1])
        {
            fi = i;
            break;
        }

    for (int i = n - 2; i >= 0; i--)
        if (v[i] == v[i + 1])
        {
            li = i;
            break;
        }

    int len = li - fi + 1;
    int ans = len - 1;

    cout << max(ans, 1) << endl;
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