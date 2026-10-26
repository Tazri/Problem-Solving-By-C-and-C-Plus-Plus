// link : https://codeforces.com/problemset/problem/1795/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll mod = 998244353;
ll SZ = 2e5 + 5;

vector<ll> fact(SZ);
vector<ll> ifact(SZ);

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

void build()
{
    fact[0] = 1;
    for (int i = 1; i < SZ; i++)
    {
        fact[i] = fact[i - 1] * i % mod;
    }

    ifact[SZ - 1] = bigmod(fact[SZ - 1], mod - 2, mod);

    for (int i = SZ - 2; i >= 0; i--)
    {
        ifact[i] = ifact[i + 1] * (i + 1) % mod;
    }
}

ll nCr(ll n, ll r)
{
    if (r > n || r < 0)
        return 0;
    return (fact[n] * ifact[r] % mod) * ifact[n - r] % mod;
}

void precal(){
    build();
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    int tri = n/3;
    int rd = tri/2;
    int chse = nCr(tri,rd);
    int cnt  = 1;

    for(int i = 0;i < (n/3);i++){
        int a,b,c;
        cin >> a >> b >> c;
        int mn = min({a,b,c});
        int mnCnt = 0;
        if(mn == a)mnCnt++;
        if(mn == b)mnCnt++;
        if(mn == c)mnCnt++;

        cnt*=mnCnt;
        cnt %= mod;
    }
    cout<< ((cnt*chse)%mod) << endl;
    
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    // cin >> t;
    for(int i = 1;i <= t;i++)
        _DIBBA(i);
    return 0;
}