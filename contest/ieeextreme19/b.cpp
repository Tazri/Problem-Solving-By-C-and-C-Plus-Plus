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

void program()
{
    ll n;
    cin >> n;

    if (n & 1)
    {
        cout << -1 << endl;
        return;
    }

    vector<ll> bit;
    ll sz = 63;
    for (ll i = 1, b = 1; i <= sz; i++, b *= 2)
        bit.push_back(b);

    reverse(bit.begin(), bit.end());

    vector<ll> nbin(bit.size(), 0);

    ll cn = n;
    for (ll i = 0; i < bit.size(); i++)
    {
        if (cn < bit[i])
            continue;
        nbin[i] = bit[i];
        cn -= bit[i];
    }

    vector<ll> bbin(sz, 0);
    vector<ll> cbin(sz, 0);

    for (ll i = 0; i < sz - 1; i++)
    {
        if (nbin[i] == 0)
            continue;

        bbin[i + 1] = bit[i + 1];
        cbin[i + 1] = bit[i + 1];
    }

    for (ll i = 0; i < sz; i++)
    {
        if (bbin[i] == 0)
            continue;

        if (nbin[i] != 0)
            continue;

        nbin[i] = bit[i];
        bbin[i] = 0;
        break;
    }

    ll a = 0;
    ll b = 0;
    ll c = 0;

    for (ll i = 0; i < sz; i++)
    {
        a += nbin[i];
        b += bbin[i];
        c += cbin[i];
    }

    cout << a << " " << b << " " << c << endl;
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