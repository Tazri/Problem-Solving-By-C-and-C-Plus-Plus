## Usefull Function

```cpp
// ceil divisors
long long llCeilDiv(long long a, long long b)
{
    return (a + b - 1) / b;
}

int intCeilDiv(int a, int b)
{
    return (a + b - 1) / b;
}

// get mod always safe way
long long llmod(long long a, long long mod)
{
    return ((a % mod) + mod) % mod;
}

int intMod(int a, int mod)
{
    return ((a % mod) + mod) % mod;
}
```

```cpp
// binary exponention
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
```

## floor sqrt

```cpp
int isqrt(int n)
{
    int l = 0, r = n;
    int ans = 0;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (mid <= n / mid)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return ans;
}
```
