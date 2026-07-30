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

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> ans(n);

    int ex = 0;
    ans[0] = v[0];
    int totalGone = v[0];
    for (int i = 1; i < n; i++)
    {
        totalGone += v[i];
        if (v[i] >= ans[i - 1])
        {
            ex += v[i] - ans[i - 1];
            ans[i] = ans[i - 1];
            continue;
        }

        int avg = totalGone / (i + 1);
        ans[i] = min(avg, ans[i - 1]);

        ex = totalGone - (ans[i] * (i + 1));
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[i == n - 1];
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