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

    ll n;
    cin >> n;
    vector<ll> arr(n);
    ordered_set<ll> os;

    for (ll &ai : arr)
        cin >> ai;

    ll ans = 0;

    for (ll ai : arr)
    {
        ll less = os.order_of_key(ai);
        ll add = os.size() - less;
        ans += add;
        os.insert(ai);
    }

    cout << ans << endl;
    string tmp;
    getline(cin, tmp);
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    string tmp;
    getline(cin, tmp);

    while (t--)
    {
        program();
    }
    return 0;
}