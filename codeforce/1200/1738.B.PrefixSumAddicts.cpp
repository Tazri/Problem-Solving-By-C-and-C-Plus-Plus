// link : https://codeforces.com/problemset/problem/1738/B
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

bool ok(ll sum, ll slot, ll limit)
{
    if (sum >= 0)
    {
        if (limit < 0)
            return false;
        if (sum <= limit)
            return true;

        ll per = (sum + slot - 1) / slot;
        if (per > limit)
            return false;
        return true;
    }

    if (limit >= 0)
        return true;

    if (limit < sum)
        return false;

    ll a = sum * -1;
    ll p1 = (a + slot - 1) / slot;
    ll p2 = a / slot;
    p1 *= -1;
    p2 *= -1;
    if (p1 <= limit && p2 <= limit)
        return true;
    return false;
}

void program()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(k);

    for (ll i = 0; i < k; i++)
        cin >> v[i];

    if (n == 1 || k == 1)
    {
        cout << "YES" << endl;
        return;
    }

    for (ll i = k - 1; i > 0; i--)
        v[i] -= v[i - 1];

    bool isSorted = true;

    for (ll i = 2; i < k; i++)
        if (v[i - 1] > v[i])
        {
            isSorted = false;
            break;
        }

    if (!isSorted)
    {
        cout << "NO" << endl;
        return;
    }

    ll front = v[0];
    ll left = n - k;

    // for (ll vi : v)
    //     cout << vi << " ";
    // cout << endl;

    ll slot = left + 1;
    ll sum = v[0];
    ll limit = v[1];
    // cout << " l : " << limit << " slot : " << slot << " sum : " << sum << endl;

    if (ok(sum, slot, limit))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}