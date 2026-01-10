// link : https://www.spoj.com/problems/PUCMM210/
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

#define endl '\n'

ll mod = 1000000003;
ll sz = 1000000;
vector<ll> v(sz + 1, 0);

void build()
{
    for (ll i = 1; i <= sz; i++)
    {
        v[i] = (i * (i + 1)) / 2;
        v[i] %= mod;
        v[i] *= v[i];
        v[i] %= mod;
        v[i] += v[i - 1];
        v[i] %= mod;
    }
}

void program()
{
    ll n;
    cin >> n;
    cout << v[n] << endl;
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