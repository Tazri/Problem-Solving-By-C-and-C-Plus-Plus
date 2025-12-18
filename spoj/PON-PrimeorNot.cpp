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

ll mul(ll a, ll b, ll mod)
{
    return (__int128)a * b % mod;
}

ll binpow(ll a, ll d, ll mod)
{
    ll r = 1;
    while (d)
    {
        if (d & 1)
            r = mul(r, a, mod);
        a = mul(a, a, mod);
        d >>= 1;
    }
    return r;
}

bool isPrime(ll n)
{
    if (n < 2)
        return false;
    for (ll p : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37})
        if (n % p == 0)
            return n == p;

    ll d = n - 1, s = 0;
    while ((d & 1) == 0)
    {
        d >>= 1;
        ++s;
    }

    for (ll a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022})
    {
        if (a % n == 0)
            continue;
        ll x = binpow(a, d, n);
        if (x == 1 || x == n - 1)
            continue;

        bool composite = true;
        for (int r = 1; r < s; r++)
        {
            x = mul(x, x, n);
            if (x == n - 1)
            {
                composite = false;
                break;
            }
        }
        if (composite)
            return false;
    }
    return true;
}
void program()
{
    ll n;
    cin >> n;

    if (isPrime(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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