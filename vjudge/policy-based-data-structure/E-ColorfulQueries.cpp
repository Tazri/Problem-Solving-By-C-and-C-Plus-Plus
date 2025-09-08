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
    int n, q;
    cin >> n >> q;
    ordered_set<pair<int, int>> os;
    vector<int> mp(n + 1, 0);

    for (int i = 1; i <= n; i++)
    {
        int vi;
        cin >> vi;

        os.insert({i, vi});

        if (mp[vi] == 0)
            mp[vi] = i;
    }

    int id = 0;
    while (q--)
    {
        int qi;
        cin >> qi;
        int count = os.order_of_key({mp[qi], qi});
        os.erase({mp[qi], qi});
        os.insert({id, qi});
        mp[qi] = id;
        id--;
        cout << count + 1 << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}