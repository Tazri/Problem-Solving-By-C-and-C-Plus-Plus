#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll
vector<int> primes;
int N = 1e5;
int mod = 10000019;

long long mulmod128(long long a, long long b, long long mod)
{
    return (long long)((__int128)a * b % mod);
}

long long bigmod(long long a, long long b, long long mod)
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

void takePrimes(int n, vector<int> &primes)
{
    if (n < 2)
        return;

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    primes.clear();
    primes.push_back(2);

    for (int i = 3; i * i <= n; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += 2 * i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 3; i <= n; i += 2)
        if (isPrime[i])
            primes.push_back(i);
}

void precal()
{
    takePrimes(N, primes);
}

int legendre(int n, int p)
{
    int cnt = 0;

    while (n)
    {
        cnt += (n / p);
        n /= p;
    }

    return cnt;
}

void _DIBBA(int _DIBBA_NO)
{
    cout << "Case " << _DIBBA_NO << ": ";
    int n, t;
    cin >> n >> t;

    int ans = 1;
    for (int p : primes)
    {
        if (p > n)
            break;

        int f = legendre(n, p);
        int tm = (f / t);
        ans *= bigmod(p, tm, mod);
        ans %= mod;
    }

    if (ans == 1)
        cout << -1 << endl;
    else
        cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}