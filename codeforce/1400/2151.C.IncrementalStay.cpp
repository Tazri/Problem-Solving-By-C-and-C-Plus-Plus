// link : https://codeforces.com/problemset/problem/2151/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll
void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(2 * n + 1);
    vector<int> pre(2 * n + 1);
    vector<int> even(2 * n + 1);
    vector<int> odd(2 * n + 1);

    for (int i = 1; i <= 2 * n; i++)
    {
        cin >> v[i];
        pre[i] = v[i];
        if (i & 1)
            odd[i] = v[i];
        else
            even[i] = v[i];
    }

    for (int i = 1; i <= 2 * n; i++)
    {
        odd[i] += odd[i - 1];
        even[i] += even[i - 1];
        pre[i] += pre[i - 1];
    }

    vector<int> allAns(n + 1);
    for (int k = 1; k <= n; k++)
    {
        int L = 1;
        int R = k;
        int ans = 0 - (pre[R] - pre[L - 1]);

        R = 2 * n;
        L = (2 * n) - k + 1;
        ans += (pre[R] - pre[L - 1]);

        L = k + 1;
        R = (2 * n) - k;

        if (L % 2 == 0)
        {
            ans += (even[R] - even[L - 1]);
            ans -= (odd[R] - odd[L - 1]);
        }
        else
        {
            ans -= (even[R] - even[L - 1]);
            ans += (odd[R] - odd[L - 1]);
        }

        allAns[k] = ans;
    }

    for (int i = 1; i <= n; i++)
        cout << allAns[i] << " \n"[i == n];
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