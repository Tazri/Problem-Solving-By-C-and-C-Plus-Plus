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

long long llCeilDiv(long long a, long long b)
{
    return (a + b - 1) / b;
}

int intCeilDiv(int a, int b)
{
    return (a + b - 1) / b;
}

long long llmod(long long a, long long mod)
{
    return ((a % mod) + mod) % mod;
}

int intMod(int a, int mod)
{
    return ((a % mod) + mod) % mod;
}

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

void build_spf(int n, vector<int> &spf)
{
    spf.assign(n + 1, 0);
    for (int i = 2; i <= n; i++)
        spf[i] = i;

    for (int i = 4; i <= n; i += 2)
        spf[i] = 2;

    for (int i = 3; i * i <= n; i += 2)
    {
        if (spf[i] == i)
        {
            for (int j = i * i; j <= n; j += 2 * i)
            {
                if (spf[j] == j)
                    spf[j] = i;
            }
        }
    }
}

void build_nod(int n, vector<int> &nod)
{
    nod.assign(n + 1, 1);

    for (int i = 2; i <= n; i++)
    {
        for (int j = i; j <= n; j += i)
        {
            nod[j]++;
        }
    }
}

void build_nod_by_spf(int n, const vector<int> &spf, vector<int> &nod)
{
    nod.assign(n + 1, 1);

    for (int i = 2; i <= n; i++)
    {
        int x = i;
        int p = spf[i];
        int cnt = 0;

        while (x % p == 0)
        {
            x /= p;
            cnt++;
        }

        nod[i] = nod[x] * (cnt + 1);
    }
}

void build_sod(int n, vector<int> &sod)
{
    sod.assign(n + 1, 1);
    sod[0] = 0;

    for (int i = 2; i <= n; i++)
        for (int j = i; j <= n; j += i)
            sod[j] += i;
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

int main()
{
    optimize();

    return 0;
}