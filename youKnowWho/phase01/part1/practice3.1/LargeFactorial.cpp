// linK : https://www.codechef.com/problems/FUM
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
ll sz = 1000;
vector<ll> fact(sz + 1, 1);

void build()
{
    fact[0] = 1;
    for (ll i = 1; i <= sz; i++)
    {
        fact[i] *= fact[i - 1] * i;
        fact[i] %= mod;
    }
}

void program()
{
    ll n;
    cin >> n;
    cout << fact[n] << endl;
}

int32_t main()
{
    optimize();
    build();

    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}