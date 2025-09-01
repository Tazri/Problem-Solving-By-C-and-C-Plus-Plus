// link : https://codeforces.com/problemset/problem/1995/B1
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
    ll n, m;
    cin >> n >> m;
    vector<ll> f(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> f[i];
    }

    sort(f.begin(), f.end());

    ll mx = 0;
    ll bi = 0; // back point
    ll fi = 0; // front point
    ll money = 0;

    while (fi < n)
    {
        if (f[fi] > m)
        {
            break;
        }

        ll d = f[fi] - f[bi];
        if (d <= 1 && money + f[fi] <= m)
        {
            money += f[fi];
            fi++;
            mx = max(money, mx);
        }
        else
        {
            while (f[fi] - f[bi] > 1 || money + f[fi] > m)
            {
                money -= f[bi];
                bi++;
            }
        }
    }

    cout << mx << endl;
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