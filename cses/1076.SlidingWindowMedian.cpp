// link :https://cses.fi/problemset/task/1076
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

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

template <class T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void program()
{
    int n, k;

    cin >> n >> k;

    vector<pair<int, int>> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    ordered_set<pair<int, int>> os;

    for (int i = 0; i < k; i++)
        os.insert(a[i]);

    vector<int> ans;
    ans.reserve(n);

    int mid = k & 1 ? (k / 2) + 1 : k / 2;
    int mi = mid - 1;

    pair<int, int> m = *os.find_by_order(mi);
    ans.push_back(m.first);

    for (int i = k, f = 0; i < n; i++, f++)
    {
        os.erase(a[f]);
        os.insert(a[i]);
        ans.push_back((*os.find_by_order(mi)).first);
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
}

int main()
{
    optimize();
    program();
    return 0;
}