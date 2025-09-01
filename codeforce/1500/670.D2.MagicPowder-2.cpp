// link :  https://codeforces.com/problemset/problem/670/D2
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

bool canMake(vector<ll> &a, vector<ll> &b, ll k, ll n)
{
    for (ll i = 0; i < a.size(); i++)
    {
        ll need = a[i] * n;
        if (need <= b[i])
            continue;

        ll extra = need - b[i];

        if (k < extra)
        {
            return false;
        }

        k -= extra;
    }

    return true;
}

void program()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);

    for (ll &ai : a)
        cin >> ai;
    for (ll &bi : b)
        cin >> bi;

    ll l = 1;
    ll r = INT_MAX;
    ll ans = 0;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (canMake(a, b, k, mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}