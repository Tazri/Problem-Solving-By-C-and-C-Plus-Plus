## Create pow and inverse pow table

```cpp
void buildPowTables(ll base, int mod, int sz, vector<ll> &pw, vector<ll> &ipw)
{
    pw = vector<ll>(sz + 1);
    ipw = vector<ll>(sz + 1);

    pw[0] = 1;
    for (int i = 1; i <= sz; i++)
        pw[i] = (base * pw[i - 1]) % mod;

    ipw[sz] = bigmod(bigmod(base, sz, mod), mod - 2, mod);

    for (int i = sz - 1; i >= 0; i--)
        ipw[i] = (base * ipw[i + 1]) % mod;
}
```

## Hash Context

```cpp
// suggest hash context
// base : 911323,972331,1000003,1000033,1000037,1000039,1000081,1000099,1000117,1000121,1000133,1000151,1000183,911382323,972663749
// mods : 998244353,1000000007,1000000009,1004535809,1007681537,1012924417,1045430273,1051721729,1053818881,1073741789

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int randomBase(int mod)
{
    uniform_int_distribution<int> dist(256, mod - 2);

    while (true)
    {
        int x = dist(rng);

        if (x % 2 == 0)
            x++;

        return x;
    }
}
int BASE1 = randomBase(MOD1);
int BASE2 = randomBase(MOD2);

```

```cpp
struct HashContext
{
    vector<ll> pw1, pw2, ipw1, ipw2;
    int mod1, mod2, size;
    HashContext(ll b1, ll b2, ll _mod1, ll _mod2, int _size)
    {
        mod1 = _mod1, mod2 = _mod2, size = _size;
        buildPowTables(b1, mod1, size, pw1, ipw1);
        buildPowTables(b2, mod2, size, pw2, ipw2);
    }

    pair<ll, ll> getHash(const string &s)
    {
        ll hash1 = 0, hash2 = 0;

        for (int i = 0; i < (int)s.size(); i++)
        {
            hash1 = (hash1 + ((ll)s[i] * pw1[i]) % mod1) % mod1;
            hash2 = (hash2 + ((ll)s[i] * pw2[i]) % mod2) % mod2;
        }

        return {hash1, hash2};
    }

    pair<ll, ll> merge(pair<ll, ll> h1, pair<ll, ll> h2, ll first_size)
    {
        ll hash1 = h1.first + (h2.first * pw1[first_size]) % mod1;
        hash1 %= mod1;

        ll hash2 = h1.second + (h2.second * pw2[first_size]) % mod2;
        hash2 %= mod2;
        return {hash1, hash2};
    }
};
```

## Rolling Hash

```cpp
struct RollingHash
{
    vector<pair<ll, ll>> prefixHash, reversePrefixHash;
    int contentSize;
    const vector<ll> &pw1;
    const vector<ll> &pw2;
    const vector<ll> &ipw1;
    const vector<ll> &ipw2;
    int mod1, mod2;

    RollingHash(const string &s, HashContext &hb) : pw1(hb.pw1),
                                                    pw2(hb.pw2),
                                                    ipw1(hb.ipw1),
                                                    ipw2(hb.ipw2),
                                                    mod1(hb.mod1),
                                                    mod2(hb.mod2)
    {

        contentSize = s.size();
        string rev = s;
        reverse(rev.begin(), rev.end());

        ll hash1 = 0, hash2 = 0;
        ll ihash1 = 0, ihash2 = 0;
        prefixHash = vector<pair<ll, ll>>(s.size());
        reversePrefixHash = vector<pair<ll, ll>>(s.size());

        for (int i = 0; i < (int)s.size(); i++)
        {

            hash1 = (hash1 + ((ll)s[i] * pw1[i]) % mod1) % mod1;
            hash2 = (hash2 + ((ll)s[i] * pw2[i]) % mod2) % mod2;

            ihash1 = (ihash1 + ((ll)rev[i] * pw1[i]) % mod1) % mod1;
            ihash2 = (ihash2 + ((ll)rev[i] * pw2[i]) % mod2) % mod2;

            prefixHash[i] = {hash1, hash2};
            reversePrefixHash[i] = {ihash1, ihash2};
        }
    }

    pair<ll, ll> rRangeQuery(int l, int r, bool isReverse = false)
    {
        vector<pair<ll, ll>> &pre = isReverse ? reversePrefixHash : prefixHash;

        ll sum1 = pre[r].first - (l == 0 ? 0 : pre[l - 1].first);
        ll sum2 = pre[r].second - (l == 0 ? 0 : pre[l - 1].second);

        sum1 = ((sum1 % mod1) + mod1) % mod1;
        sum2 = ((sum2 % mod2) + mod2) % mod2;

        sum1 = (sum1 * ipw1[l]) % mod1;
        sum2 = (sum2 * ipw2[l]) % mod2;
        return {sum1, sum2};
    }

    pair<ll, ll> rRangeReverseQuery(int l, int r)
    {
        int rL = contentSize - l - 1;
        int rR = contentSize - r - 1;
        return rRangeQuery(rR, rL, true);
    }
};
```

## String Hashing

```cpp
constexpr int PWSIZE = ((int)1e6) + 123;
// primes 293, 307,911323,972331
// mods 998244353, 1000000007, 1000000009, 1053818881. 1073741789

pair<int, int> pre[PWSIZE + 1]; // prefix hash store here
int pw1[PWSIZE + 1], ipw1[PWSIZE + 1];
int pw2[PWSIZE + 1], ipw2[PWSIZE + 1];
constexpr int base1 = 293, base2 = 307;
constexpr int mod1 = 1004535809, mod2 = 1012924417;

void buildPowTable()
{
    int sz = PWSIZE;
    pw1[0] = pw2[0] = 1;
    for (int i = 1; i <= sz; i++)
    {
        pw1[i] = (1LL * base1 * pw1[i - 1]) % mod1;
        pw2[i] = (1LL * base2 * pw2[i - 1]) % mod2;
    }

    ipw1[sz] = bigmod(pw1[sz], mod1 - 2, mod1);
    ipw2[sz] = bigmod(pw2[sz], mod2 - 2, mod2);

    for (int i = sz - 1; i >= 0; i--)
    {
        ipw1[i] = (1LL * base1 * ipw1[i + 1]) % mod1;
        ipw2[i] = (1LL * base2 * ipw2[i + 1]) % mod2;
    }
}

void buildPrefixHash(const string &s)
{
    int n = s.size();
    int hash1 = 0, hash2 = 0;
    for (int i = 0; i < n; i++)
    {
        hash1 += (1LL * (ll)s[i] * pw1[i]) % mod1;

        if (hash1 >= mod1)
            hash1 -= mod1;

        hash2 += (1LL * (ll)s[i] * pw2[i]) % mod2;
        if (hash2 >= mod2)
            hash2 -= mod2;
        pre[i] = {hash1, hash2};
    }
}

pair<int, int> getHash(int l, int r)
{
    if (l == 0)
        return pre[r];

    int sum1 = pre[r].first - pre[l - 1].first;
    int sum2 = pre[r].second - pre[l - 1].second;

    if (sum1 < 0)
        sum1 += mod1;
    if (sum2 < 0)
        sum2 += mod2;

    sum1 = (1LL * sum1 * ipw1[l]) % mod1;
    sum2 = (1LL * sum2 * ipw2[l]) % mod2;
    return {sum1, sum2};
}
```

## PairHash function

```cpp
struct PairHash
{
    size_t operator()(const pair<int, int> &p) const
    {
        return ((uint64_t)p.first << 32) ^ (uint32_t)p.second;
    }
};
```
