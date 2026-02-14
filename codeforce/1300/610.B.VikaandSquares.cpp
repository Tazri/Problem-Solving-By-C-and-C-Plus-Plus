// link : https://codeforces.com/contest/610/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

#define int ll

void program()
{
    int n;
    cin >> n;
    vector<int> v(n + 2);
    int mn = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];

        if (i == 1)
            mn = v[i];

        mn = min(mn, v[i]);
    }

    vector<int> pre(n + 2, 0);
    int fi = -1;
    int li = -1;
    for (int i = 1; i <= n; i++)
        if (v[i] == mn)
        {
            pre[i] = i;
            if (fi == -1)
                fi = i;
        }

    pre[n + 1] = n + 1;

    // for (int i = 1; i <= n; i++)
    //     cout << pre[i] << " ";
    // cout << endl;

    int stop = fi;

    for (int i = n; i >= 1; i--)
    {
        int np = pre[i] ? pre[i] : stop;
        pre[i] = stop;
        stop = np;
    }

    int ans = mn * n;
    int mx = 0;
    for (int i = 1; i <= n; i++)
    {
        int si = pre[i];

        int extra;

        if (si <= i)
        {
            extra = si - 1;
            extra += n - i;
        }
        else
        {
            extra = si - i - 1;
        }

        if (v[i] != mn)
            extra++;
        mx = max(extra, mx);
    }

    cout << ans + mx << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}