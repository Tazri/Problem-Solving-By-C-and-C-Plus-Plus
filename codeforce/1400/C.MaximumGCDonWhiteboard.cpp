// link : https://codeforces.com/problemset/problem/2156/C
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
    int n, k;
    cin >> n >> k;
    vector<int> pre(n + 1);

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        pre[v[i]]++;
    }

    for (int i = 1; i <= n; i++)
        pre[i] += pre[i - 1];

    for (int g = n; g >= 1; g--)
    {
        int ti = min(4 * g, n);
        int total = pre[ti];
        int sub = 0;

        for (int i = 1; i <= 4 && g * i <= n; i++)
        {
            int gi = i * g;
            int cnt = pre[gi] - pre[gi - 1];

            sub += cnt;
        }

        total -= sub;

        if (total <= k)
        {
            cout << g << endl;
            return;
        }
    }
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