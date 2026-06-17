#include <bits/stdc++.h>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

using namespace std;

typedef long long ll;
typedef double dl;

#define int ll
#define endl '\n'
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// number of element greater than before v[i]
vector<int> countInversion(vector<int> &v)
{
    int n = v.size();
    vector<int> ans(n);

    ordered_set<pair<int, int>> mt;

    for (int i = 0; i < n; i++)
    {
        int total = i + 1;

        int less = mt.order_of_key({v[i], i}) + 1;
        ans[i] = total - less;

        mt.insert({v[i], i});
    }

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> ans = countInversion(v);
    int cnt = 0;

    for (int i = 0; i < n; i++)
        cnt += ans[i];

    cout << cnt << endl;
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