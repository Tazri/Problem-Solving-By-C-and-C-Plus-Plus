// link : https://codeforces.com/contest/2227/problem/F
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

#define int ll
using namespace __gnu_pbds;

template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> sv(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sv[i] = v[i];
    }

    sort(sv.begin(), sv.end());
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sv[i] = v[i] - sv[i];
        if (i != 0)
        {
            sv[i] += sv[i - 1];
        }
        sum += sv[i];
    }

    int ans = sum;
    ordered_multiset<int> mt;
    ordered_multiset<int> left;
    for (int i = 0; i < n; i++)
    {
        left.insert(v[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (left.upper_bound(v[i]) != left.end())
            left.erase(left.upper_bound(v[i]));

        int rm = mt.order_of_key(v[i]);
        sum -= rm;

        int totalLeft = left.size();
        totalLeft -= left.order_of_key(v[i]);
        sum += totalLeft;
        ans = max(sum, ans);
        sum -= totalLeft;
        sum += rm;
        mt.insert(v[i]);
    }

    cout << ans << endl;
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