// link : https://codeforces.com/contest/2193/problem/C
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
    int n, q;
    cin >> n >> q;

    vector<int> a(n + 1);
    vector<int> b(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; i++)
        cin >> b[i];

    for (int i = 1; i <= n; i++)
        a[i] = max(a[i], b[i]);

    for (int i = n - 1; i >= 1; i--)
        a[i] = max(a[i], a[i + 1]);

    for (int i = 1; i <= n; i++)
        a[i] += a[i - 1];

    vector<int> ans;
    ans.reserve(q);
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        ans.push_back(a[r] - a[l - 1]);
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == (int)ans.size() - 1];
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