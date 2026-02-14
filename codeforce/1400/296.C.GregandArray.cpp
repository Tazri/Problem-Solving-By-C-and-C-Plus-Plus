// link : https://codeforces.com/contest/296/problem/C
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

struct OP
{
    int l, r, x;
};

void program()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<OP> op(m + 1);
    vector<int> d(n + 2, 0);

    for (int i = 1; i <= m; i++)
        cin >> op[i].l >> op[i].r >> op[i].x;

    vector<int> times(m + 2);

    while (k--)
    {
        int l, r;
        cin >> l >> r;
        times[l] += 1;
        times[r + 1] -= 1;
    }

    for (int i = 1; i <= m; i++)
        times[i] += times[i - 1];

    for (int i = 1; i <= m; i++)
    {
        int t = times[i];
        d[op[i].l] += (op[i].x * t);
        d[op[i].r + 1] -= (op[i].x * t);
    }

    for (int i = 1; i <= n; i++)
        d[i] += d[i - 1];

    for (int i = 1; i <= n; i++)
        v[i] += d[i];

    for (int i = 1; i <= n; i++)
        cout << v[i] << " \n"[i == n];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}