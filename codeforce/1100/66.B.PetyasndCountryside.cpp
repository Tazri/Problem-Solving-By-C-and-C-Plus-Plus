
// link : https://codeforces.com/problemset/problem/66/B
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

void program()
{
    int n;
    cin >> n;
    vector<int> v(n + 2, 0);
    vector<int> pre(n + 2, 0);
    vector<int> suff(n + 2, 0);
    int INF = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        INF += v[i];
    }
    INF += 1234;
    v[0] = INF;
    v[n + 1] = INF;

    for (int i = 2; i <= n; i++)
    {
        if (v[i - 1] < v[i])
            suff[i] = i;
    }

    for (int i = 2; i <= n; i++)
    {
        if (v[i] > v[i + 1])
            pre[i] = i;
    }

    suff[n + 1] = n + 1;
    int stop = n + 1;
    for (int i = n; i >= 1; i--)
    {
        int np = suff[i] ? suff[i] : stop;
        suff[i] = stop;
        stop = np;
    }

    stop = 0;
    for (int i = 1; i <= n; i++)
    {
        int np = pre[i] ? pre[i] : stop;
        pre[i] = stop;
        stop = np;
    }
    // for (int i = 1; i <= n; i++)
    //     cout << v[i] << " \n"[i == n];
    // for (int i = 1; i <= n; i++)
    //     cout << suff[i] << " \n"[i == n];
    // for (int i = 1; i <= n; i++)
    //     cout << pre[i] << " \n"[i == n];

    int mx;

    for (int i = 1; i <= n; i++)
    {
        int r = suff[i];
        int l = pre[i];
        int len = r - l - 1;
        if (i == 1)
            mx = len;
        mx = max(mx, len);
    }

    cout << mx << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}