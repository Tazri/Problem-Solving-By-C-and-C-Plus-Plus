#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;
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

ll bigmodWithMulmod(ll a, ll b, ll mod)
{
    auto mul = [&](ll x, ll y)
    {
        ll res = 0;
        x %= mod;

        while (y)
        {
            if (y & 1)
                res = (res + x) % mod;

            x = (x + x) % mod;
            y >>= 1;
        }

        return res;
    };

    ll res = 1 % mod;
    a %= mod;

    while (b)
    {
        if (b & 1)
            res = mul(res, a);

        a = mul(a, a);
        b >>= 1;
    }

    return res;
}
void program(ll a, ll b, ll c)
{
    cout << bigmodWithMulmod(a, b, c) << endl;
}

int32_t main()
{
    optimize();

    int t = 1;
    // cin >> t;
    ll a, b, c;
    while (cin >> a >> b >> c)
        program(a, b, c);
    return 0;
}