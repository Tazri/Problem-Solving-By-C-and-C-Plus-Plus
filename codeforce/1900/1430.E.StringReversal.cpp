// link : https://codeforces.com/problemset/problem/1430/E
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

using namespace __gnu_pbds;

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
    string s;
    cin >> s;

    vector<vector<int>> store(30);

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        store[(int)ch - (int)'a'].push_back(i + 1);
    }

    for (int i = 0; i < 30; i++)
        sort(store[i].rbegin(), store[i].rend());

    reverse(s.begin(), s.end());
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        v[i] = store[(int)ch - (int)'a'].back();
        store[(int)ch - (int)'a'].pop_back();
    }

    vector<int> cnts = countInversion(v);

    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += cnts[i];

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