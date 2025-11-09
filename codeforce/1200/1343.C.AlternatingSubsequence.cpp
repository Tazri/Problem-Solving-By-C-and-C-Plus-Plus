// link: https://codeforces.com/problemset/problem/1343/C
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
    vector<ll> v;
    v.reserve(n);

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;

        if (i == 0)
        {
            v.push_back(ai);
            continue;
        }

        if ((v.back() < 0 && ai > 0) || (v.back() > 0 && ai < 0))
        {
            v.push_back(ai);
            continue;
        }

        if (v.back() < 0)
        {
            ll mn = min(abs(v.back()), abs(ai));
            v.back() = (mn * -1);
            continue;
        }

        ll mx = max(v.back(), ai);
        v.back() = mx;
    }

    ll sum = 0;

    for (ll vi : v)
        sum += vi;

    cout << sum << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}