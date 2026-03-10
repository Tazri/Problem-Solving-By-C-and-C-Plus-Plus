#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

ll mod = 1000000007;

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

void program(int caseno)
{
    cout << "Case #" << caseno << ": ";
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (ll &vi : v)
        cin >> vi;

    sort(v.begin(), v.end());

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll smallest = (n - 1) - i + 1;
        ll largest = i + 1;

        ll subSmallestCount = modpow(2, smallest - 1, mod);
        ll subLargestCount = modpow(2, largest - 1, mod);
        ans += (subLargestCount * v[i]);
        ans = ((ans % mod) + mod) % mod;
        ans -= ((subSmallestCount)*v[i]);
        ans = ((ans % mod) + mod) % mod;
    }

    ans %= mod;

    cout << ans << endl;
}

int32_t main()
{
    optimize();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}