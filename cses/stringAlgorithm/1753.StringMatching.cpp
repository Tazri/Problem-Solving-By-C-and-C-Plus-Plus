// link : https://cses.fi/problemset/task/1753/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll bigmod(ll a, ll b, ll mod)
{
    ll res = 1;
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

void _DIBBA(int _DIBBA_NO)
{
    string s, sub;
    cin >> s >> sub;
    if (sub.size() > s.size())
    {
        cout << 0 << endl;
        return;
    }

    ll b1 = 911323;
    ll b2 = 972331;
    ll mod1 = 1053818881;
    ll mod2 = 1073741789;
    HashContext hc(b1, b2, mod1, mod2, ((ll)1e6 + 123));
    pair<ll, ll> subHash = hc.getHash(sub);
    RollingHash rh(s, hc);

    int cnt = 0;
    for (int l = 0, r = sub.size() - 1; r < s.size(); r++, l++)
    {
        pair<ll, ll> hash = rh.rRangeQuery(l, r);
        if (hash == subHash)
            cnt++;
    }

    cout << cnt << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}