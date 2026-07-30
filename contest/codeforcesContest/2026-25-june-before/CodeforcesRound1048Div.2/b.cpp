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

    vector<ll> v;
    v.reserve(n);
    set<ll> st;

    for (ll i = 0; i < n; i++)
    {
        ll vi;
        cin >> vi;
        if (st.count(vi))
            continue;
        v.push_back(vi);
    }

    n = v.size();

    ll ans = 0;
    if (n == 1)
    {
        ans += (v[0] * m);
        cout << ans << endl;
        return;
    }

    sort(v.begin(), v.end(), [](ll a, ll b)
         { return a > b; });

    ll ml = m;
    for (ll i = 0; i < n; i++)
    {
        v[i] *= ml;
        ml--;
    }

    for (ll i = 0; i < n && i < m; i++)
    {
        ans += v[i];
    }
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