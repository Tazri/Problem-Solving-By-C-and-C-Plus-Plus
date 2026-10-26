// link : https://codeforces.com/problemset/problem/126/B
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

void precal()
{
    buildPowTable();
}

void _DIBBA(int _DIBBA_NO)
{
    string s;
    cin >> s;
    int n = s.size();
    buildPrefixHash(s);

    vector<int> vk;
    for (int i = 0; i < n; i++)
    {
        pair<int, int> hash1 = getHash(0, i);
        pair<int, int> hash2 = getHash(n - i - 1, n - 1);

        if (hash1 == hash2)
        {
            vk.push_back(i + 1);
        }
    }

    if (vk.size() <= 0)
    {
        cout << "Just a legend" << endl;
        return;
    }

    int l = 0;
    int r = vk.size() - 1;
    int slt = -1;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        int k = vk[mid];

        bool ok = false;
        pair<int, int> hash = getHash(0, k - 1);
        for (int r = 0; r < n - 1; r++)
        {
            int l = r - (k - 1);

            if (l <= 0)
                continue;

            if (hash == getHash(l, r))
            {
                ok = true;
                break;
            }
        }

        if (ok)
        {
            slt = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    if (slt == -1)
    {
        cout << "Just a legend" << endl;
        return;
    }

    int k = vk[slt];

    for (int i = 0; i < k; i++)
        cout << s[i];
    cout << endl;
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