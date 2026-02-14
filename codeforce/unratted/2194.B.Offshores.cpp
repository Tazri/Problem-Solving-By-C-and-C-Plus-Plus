// link : https://codeforces.com/contest/2194/problem/B
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
    int n, x, y;

    cin >> n >> x >> y;

    vector<int> v(n + 1);
    vector<int> trans(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        trans[i] = (v[i] / x) * y;
    }

    // for (int i = 1; i <= n; i++)
    //     cout << trans[i] << " \n"[i == n];

    for (int i = 1; i <= n; i++)
        trans[i] += trans[i - 1];

    int mx = 0;

    for (int i = 1; i <= n; i++)
    {
        int base = v[i];

        base += trans[i - 1];
        base += (trans.back() - trans[i]);

        if (i == 1)
            mx = base;
        mx = max(base, mx);
    }

    cout << mx << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}