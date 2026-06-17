// link : https://codeforces.com/problemset/problem/459/D
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

using namespace __gnu_pbds;

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> pre(n);
    vector<int> suff(n);

    map<int, int> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        mp[v[i]]++;
        suff[i] = mp[v[i]];
    }

    mp.clear();
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
        pre[i] = mp[v[i]];
    }

    ordered_set<pair<int, int>> os;

    for (int i = 0; i < n; i++)
        os.insert({suff[i], i});

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        os.erase({suff[i], i});

        int ord = os.order_of_key({pre[i], 0});

        ans += ord;
    }

    cout << ans << endl;
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