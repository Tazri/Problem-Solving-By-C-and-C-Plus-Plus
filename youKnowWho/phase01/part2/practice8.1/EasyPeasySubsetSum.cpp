// link : https://toph.co/p/easy-peasy-subset-sum
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
ll mod = 1000000007;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

long long modpow(long long a, long long b, long long mod)
{
    long long res = 1;
    a %= mod;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

void program()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    vector<ll> suff(n + 2);

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    for (ll i = 0; i < n; i++)
        suff[i + 1] = v[i];

    for (ll i = n; i >= 1; i--)
        suff[i] += suff[i + 1];

    // for (ll i = 1; i <= n; i++)
    //     cout << suff[i] << " \n"[i == n];

    ll contrib = modpow(2, n - 2, mod);
    ll ans = 0;
    ll sum = 0;
    for (ll i = 1; i < n; i++)
    {
        ll pairSum = suff[i + 1];
        ll cnt = n - i;
        pairSum -= (cnt * v[i - 1]);

        sum += pairSum;
    }

    ans = ((sum % mod) * (contrib % mod)) % mod;

    cout << ans << endl;
}

int32_t main()
{
    optimize();

    ll t = 1;
    // cin >> t;
    while (t--)
        program();
    return 0;
}