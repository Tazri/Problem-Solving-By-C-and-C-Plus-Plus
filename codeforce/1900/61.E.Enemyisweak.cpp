// link : https://codeforces.com/problemset/problem/61/E
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

template <class T>
using greaterordered_set = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

void program()
{
    greaterordered_set<ll> leftOs;
    ordered_set<ll> rightOs;
    ll n;
    cin >> n;
    ll ans = 0;
    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        rightOs.insert(v[i]);
    }

    for (ll j = 0; j < n; j++)
    {
        rightOs.erase(v[j]);

        ll leftCount = leftOs.order_of_key(v[j]);
        ll rightCount = rightOs.order_of_key(v[j]);

        ll res = leftCount * rightCount;
        ans += res;

        leftOs.insert(v[j]);
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}