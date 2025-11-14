## Big Mod Exponention

```cpp
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
```

## Take Primes

```cpp
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
```

## Smallest Prime Factors (spf)

```cpp
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
```

## Number of Divisors (nod)

```cpp
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
```

## Number of Divisors using spf

```cpp
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
```

## Sum of Divisors (sod)

```cpp
void build_sod(int n, vector<int> &sod)
{
    sod.assign(n + 1, 1);
    sod[0] = 0;

    for (int i = 2; i <= n; i++)
        for (int j = i; j <= n; j += i)
            sod[j] += i;
}
```

## PHI Totient Seive

```cpp
void buildPhi(int n, vector<int> &phi)
{
    phi.resize(n + 1);
    for (int i = 1; i <= n; i++)
        phi[i] = i;

    for (int i = 2; i <= n; i++)
    {
        if (phi[i] == i)
        {
            for (int j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}
```

```cpp
void buildPhiUsingSum(int n, vector<int> &phi)
{
    phi.resize(n + 1);
    for (int i = 1; i <= n; i++)
        phi[i] = i;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + i; j <= n; j += i)
            phi[j] -= phi[i];
    }
}
```
