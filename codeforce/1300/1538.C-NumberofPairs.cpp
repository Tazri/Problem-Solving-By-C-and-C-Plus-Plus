// link : https://codeforces.com/problemset/problem/1538/C
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

ll lb(vector<ll> &arr, ll x)
{
    if (arr.back() < x)
        return arr.size();

    auto it = lower_bound(arr.begin(), arr.end(), x);

    return it - arr.begin();
}

ll ub(vector<ll> &arr, int x)
{

    if (arr.back() < x)
        return arr.size();

    auto it = upper_bound(arr.begin(), arr.end(), x);
    return it - arr.begin();
}

void program()
{
    ll n, l, r;
    cin >> n >> l >> r;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll ans = 0;
    for (ll ai : arr)
    {
        ll ln = l - ai;
        ll rn = r - ai;
        ll li = lb(arr, ln);

        if (li >= n)
            continue;

        ll ui = ub(arr, rn);

        ll c = ui - li;

        if (ai >= ln && ai <= rn)
            c -= 1;

        ans += c;
    }

    cout << ans / 2 << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}