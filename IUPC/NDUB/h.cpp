#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

template <typename T>
using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
/*
    if (os.upper_bound(x) != os.end())
    os.erase(os.upper_bound(x));
*/

void _DIBBA(int _DIBBA_NO)
{
    int n, k, x;
    cin >> n >> k >> x;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ordered_multiset<int> mt;
    for (int i = 0; i < k; i++)
    {
        mt.insert(v[i]);
    }

    int pos = (k + 1) / 2;
    pos--;

    if (*mt.find_by_order(pos) == x)
    {
        cout << "YES" << endl;
        return;
    }

    for (int l = 0, r = k; r < n; r++, l++)
    {

        if (mt.upper_bound(v[l]) != mt.end())
            mt.erase(mt.upper_bound(v[l]));

        mt.insert(v[r]);

        if (*mt.find_by_order(pos) == x)
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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