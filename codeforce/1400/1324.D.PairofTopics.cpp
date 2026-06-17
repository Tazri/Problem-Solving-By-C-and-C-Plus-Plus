// link : https://codeforces.com/problemset/problem/1324/D
#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef double dl;
#define int ll
#define endl '\n'

template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
/*
    if (os.upper_bound(x) != os.end())
    os.erase(os.upper_bound(x));
*/

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> d(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
        d[i] = a[i] - b[i];

    ordered_multiset<int> mt;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int total = i;
        int inv = -d[i];
        int less = mt.order_of_key(inv + 1);
        int greater = total - less;
        cnt += greater;

        mt.insert(d[i]);
    }

    cout << cnt << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}