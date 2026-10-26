// link : https://codeforces.com/problemset/problem/271/D
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;

#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

struct PairHash
{
    size_t operator()(const pair<int, int> &p) const
    {
        return ((uint64_t)p.first << 32) ^ (uint32_t)p.second;
    }
};

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

#define PWSIZE 15000
// primes 293, 307,911323,972331
// mods 998244353, 1000000007, 1000000009, 1053818881. 1073741789

int pw1[PWSIZE + 1], ipw1[PWSIZE + 1];
int pw2[PWSIZE + 1], ipw2[PWSIZE + 1];
vector<pair<int, int>> pre;
int base1 = 293, base2 = 307, mod1 = 1004535809, mod2 = 1012924417;

void buildPowTable()
{
    int sz = PWSIZE;
    pw1[0] = 1;
    pw2[0] = 1;
    for (int i = 1; i <= sz; i++)
    {
        pw1[i] = (1LL * base1 * pw1[i - 1]) % mod1;
        pw2[i] = (1LL * base2 * pw2[i - 1]) % mod2;
    }

    ipw1[sz] = bigmod(bigmod(base1, sz, mod1), mod1 - 2, mod1);
    ipw2[sz] = bigmod(bigmod(base1, sz, mod2), mod2 - 2, mod2);

    for (int i = sz - 1; i >= 0; i--)
    {
        ipw1[i] = (1LL * base1 * ipw1[i + 1]) % mod1;
        ipw2[i] = (1LL * base2 * ipw2[i + 1]) % mod2;
    }
}

void buildPrefixHash(string &s, vector<pair<int, int>> &pre)
{
    int n = s.size();
    pre = vector<pair<int, int>>(n);
    int hash1 = 0, hash2 = 0;
    for (int i = 0; i < n; i++)
    {
        int curr1 = (1LL * (ll)s[i] * pw1[i]) % mod1;
        hash1 += curr1;
        hash1 %= mod1;

        int curr2 = (1LL * (ll)s[i] * pw2[i]) % mod2;
        hash2 += curr2;
        hash2 %= mod2;
        pre[i] = {hash1, hash2};
    }
}

pair<int, int> getHash(int l, int r, vector<pair<int, int>> &pre)
{

    int sum1 = 1LL * pre[r].first - (l == 0 ? 0 : pre[l - 1].first);
    int sum2 = 1LL * pre[r].second - (l == 0 ? 0 : pre[l - 1].second);

    sum1 = ((sum1 % mod1) + mod1) % mod1;
    sum2 = ((sum2 % mod2) + mod2) % mod2;

    sum1 = (1LL * sum1 * ipw1[l]) % mod1;
    sum2 = (1LL * sum2 * ipw2[l]) % mod2;
    return {sum1, sum2};
}

void precal()
{
    buildPowTable();
}

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;
    int n = s.size();
    string mark;
    cin >> mark;

    int can;
    cin >> can;

    buildPrefixHash(s, pre);
    gp_hash_table<pair<int, int>, null_type, PairHash> gp;
    for (int l = 0; l < n; l++)
    {
        int bad = 0;
        for (int r = l; r < n; r++)
        {
            char chi = (int)s[r] - (int)'a';
            if (mark[chi] == '0')
                bad++;

            if (bad <= can)
            {
                pair<int, int> hash = getHash(l, r, pre);
                gp.insert(hash);
            }
            else
            {
                break;
            }
        }
    }

    cout << gp.size() << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}