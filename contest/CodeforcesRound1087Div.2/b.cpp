#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace __gnu_pbds;

template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> ans(n);
    ordered_multiset<int> st;
    map<int, int> mp;

    for (int i = n - 1; i >= 0; i--)
    {
        int lw = st.order_of_key(v[i]);
        int up = st.size() - lw - mp[v[i]];

        ans[i] = max(lw, up);

        st.insert(v[i]);
        mp[v[i]]++;
    }

    for (int i = 0; i < n; i++)
        cout << ans[i] << " \n"[ans.size() - 1 == i];
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