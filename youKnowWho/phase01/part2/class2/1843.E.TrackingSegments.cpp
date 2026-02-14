// linK: https://codeforces.com/problemset/problem/1843/E
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

bool ok(vector<pair<int, int>> &seg, vector<int> &query, int n, int qi)
{
    vector<int> pre(n + 1, 0);

    for (int i = 0; i <= qi; i++)
        pre[query[i]] = 1;

    for (int i = 1; i <= n; i++)
        pre[i] += pre[i - 1];

    for (pair<int, int> &p : seg)
    {
        int l = p.first;
        int r = p.second;
        int len = r - l + 1;
        int one = pre[r] - pre[l - 1];
        int zero = len - one;
        if (one > len - one)
            return true;
    }
    return false;
}

void program()
{
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> seg(m);
    for (int i = 0; i < m; i++)
        cin >> seg[i].first >> seg[i].second;

    int q;
    cin >> q;
    vector<int> query(q);
    for (int &qi : query)
        cin >> qi;

    int l = 0;
    int r = q - 1;
    int ans = -2;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (ok(seg, query, n, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans + 1 << endl;
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