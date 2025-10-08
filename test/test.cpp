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

ll mod = 1e9 + 7;

ll getPow(ll n)
{
    if (n == 0)
        return 1;
    vector<ll> t;

    while (n)
    {
        if (n & 1)
        {
            t.push_back(1);
            n--;
        }
        else
        {
            n /= 2;
            t.push_back(0);
        }
    }

    ll ans = 1;

    reverse(t.begin(), t.end());

    for (ll ti : t)
    {
        if (ti)
            ans *= 2;
        else
            ans *= ans;

        ans %= mod;
    }

    return ans %= mod;
}

bool isPrevABA(ll i, string s)
{
    return s[i] == 'a' && s[i - 1] == 'b' && s[i - 2] == 'a';
}

bool isABA(ll i, string s)
{
    return s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'a';
}

bool isAB(ll i, string s)
{
    return s[i] == 'a' && s[i + 1] == 'b';
}

void program()
{
    string s = "xx";
    string input;
    cin >> input;
    s += input;
    s += "xx";

    vector<ll> a(s.size(), 0);
    vector<ll> ab(s.size(), 0);
    vector<ll> aba(s.size(), 0);

    // cout << s << endl;
    for (ll i = 2; s[i] != 'x'; i++)
    {
        if (s[i] == 'a')
            a[i]++;
        if (s[i] == 'b' && s[i - 1] == 'a')
            ab[i]++;
        if (s[i] == 'a' && s[i - 1] == 'b' && s[i - 2] == 'a')
            aba[i]++;
    }

    for (ll i = 2; s[i] != 'x'; i++)
    {
        a[i] += a[i - 1];
        a[i] %= mod;
        ab[i] += ab[i - 1];
        ab[i] %= mod;
        aba[i] += aba[i - 1];
        aba[i] %= mod;
    }

    ll ans = 0;

    for (ll i = 2; s[i] != 'x'; i++)
    {
        if (s[i] == 'a')
        {
            ll can = getPow(a[i - 1]);
            ans += can;
            ans %= mod;
        }
        if (s[i] == 'b')
        {
            ll can = getPow(a[i - 1]) - 1;
            ans += can;
            ans += aba[i - 1];
            ans %= mod;
        }

        if (s[i] == 'b' && s[i - 1] == 'a')
        {
            ll can = getPow(ab[i - 3]) - 1;
            ans += can;
            ans %= mod;
        }
    }

    cout << ans % mod << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}