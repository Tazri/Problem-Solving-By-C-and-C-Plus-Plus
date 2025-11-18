// link : https://codeforces.com/problemset/problem/762/A
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
    ll n, k;
    cin >> n >> k;
    vector<ll> d;
    d.reserve(1e7);

    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;

        ll d1 = i;
        ll d2 = n / i;
        d.push_back(d1);
        if (d2 != d1)
            d.push_back(d2);
    }

    sort(d.begin(), d.end());

    if (k <= d.size())
    {
        cout << d[k - 1] << endl;
    }
    else
        cout << -1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}