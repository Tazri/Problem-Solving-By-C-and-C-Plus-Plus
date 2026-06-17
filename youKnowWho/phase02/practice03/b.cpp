#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll mod = 1009;
ll SZ = 1000;

vector<ll> fact(SZ + 123);
vector<ll> ifact(SZ + 123);

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
    for (int i = 1; i <= SZ; i++)
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

void precal()
{
    build();
}

string make(char x, int pw)
{
    if (pw == 0)
        return "";
    string res = "";
    res.push_back(x);

    if (pw != 1)
    {
        res += '^';
        res += to_string(pw);
    }

    return res;
}

void _DIBBA(int _DIBBA_NO)
{
    int pw;
    string eqs;
    cin >> eqs >> pw;

    cout << eqs << "^" << pw << "  =  ";

    if (pw == 0)
    {
        cout << "(1)" << endl;
        return;
    }

    char x = eqs[1];
    char y = eqs[3];
    char chsign = eqs[2];
    int sign = 1;
    int signMulti = chsign == '-' ? -1 : 1;

    for (int n = pw, r = 0; r <= pw; n--, r++, sign *= signMulti)
    {

        if (r != 0)
        {
            if (sign == 1)
                cout << "  +  ";
            else
                cout << "  -  ";
        }

        cout << "(";
        int coff = nCr(pw, r);

        int xpw = n;
        int ypw = r;

        vector<string> vr;

        if (coff != 1 && coff != 0)
            vr.push_back(to_string(coff));

        string xcom = make(x, xpw);
        string ycom = make(y, ypw);
        if (xcom != "")
            vr.push_back(xcom);
        if (ycom != "")
            vr.push_back(ycom);

        cout << vr[0];
        for (int i = 1; i < vr.size(); i++)
            cout << " * " << vr[i];

        cout << ")";
    }
    cout << endl;
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