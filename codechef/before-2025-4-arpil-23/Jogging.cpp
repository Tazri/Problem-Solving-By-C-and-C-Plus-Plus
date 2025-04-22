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

const ll mod = 1e9 + 7;

vector<ll> powers(1e6 + 1);

void program()
{
    ll n, x;
    cin >> n >> x;

    if (n == 1)
    {
        cout << x << endl;
        return;
    }
    n--;
    vector<ll> type;

    while (n)
    {
        if (n & 1)
        {
            type.push_back(1);
            n--;
        }
        else
        {
            type.push_back(2);
            n /= 2;
        }
    }

    ll rn = 1;
    for (int i = type.size() - 1; i >= 0; i--)
    {
        ll t = type[i];

        if (t == 1)
            rn *= 2;
        else
            rn *= rn;

        rn %= mod;
    }

    ll ans = (x * rn) % mod;
    cout << ans << endl;
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