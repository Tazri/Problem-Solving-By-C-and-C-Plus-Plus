// link : https://codeforces.com/contest/2216/problem/C
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
    int n, k, P, Q;
    cin >> n >> k >> P >> Q;

    vector<int> v(n + 1);
    vector<int> p(n + 1);
    vector<int> qp(n + 1);
    vector<int> op(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        p[i] = v[i] % P;
        qp[i] = (v[i] % Q) % P;
        op[i] = min(p[i], qp[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        p[i] += p[i - 1];
        qp[i] += qp[i - 1];
        op[i] += op[i - 1];
    }

    int ans = p.back();
    int SUM = op.back();
    for (int l = 1, r = k; r <= n; r++, l++)
    {
        int sum = SUM;
        sum -= op[r] - op[l - 1];
        sum += min(p[r] - p[l - 1], qp[r] - qp[l - 1]);

        ans = min(ans, sum);
    }

    cout << ans << endl;
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