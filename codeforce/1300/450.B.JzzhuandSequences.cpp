// link : https://codeforces.com/problemset/problem/450/B
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

long long llmod(long long a, long long mod)
{
    return ((a % mod) + mod) % mod;
}

ll mod = 1000000007;

void program()
{
    vector<ll> v;
    ll x, y, n;
    cin >> x >> y >> n;

    x = llmod(x, mod);
    y = llmod(y, mod);

    v.push_back(x);
    v.push_back(y);

    int time = 0;
    while (true)
    {

        v.push_back(v[v.size() - 1] - v[v.size() - 2]);
        v[v.size() - 1] = llmod(v[v.size() - 1], mod);

        if (v[v.size() - 2] == x && v[v.size() - 1] == y)
            break;
    }

    v.pop_back();
    v.pop_back();

    ll th = (n - 1) % v.size();
    cout << v[th] << endl;
}

int main()
{
    optimize();

    program();
    return 0;
}