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

    ll cuts = 0;

    for (ll i = 0; i < n; i++)
    {
        ll vi;
        cin >> vi;

        if (vi & 1)
            v.push_back(vi);
        else
            cuts += vi;
    }

    if (!v.size())
    {
        cout << 0 << endl;
        return;
    }

    sort(v.begin(), v.end(), [](ll a, ll b)
         { return a > b; });

    cuts += v[0];
    ll left = v.size() - 1;
    ll take = (left / 2);
    for (ll i = 1, t = 0; t < take && i < v.size(); i++, t++)
        cuts += v[i];

    cout << cuts << endl;
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