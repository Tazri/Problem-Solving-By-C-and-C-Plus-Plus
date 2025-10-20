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
