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
    vector<ll> p(n);
    vector<ll> v(k);

    for (ll &pi : p)
        cin >> pi;
    for (ll &vi : v)
        cin >> vi;

    ll ans = 0;

    sort(p.begin(), p.end(), [](ll a, ll b)
         { return a > b; });
    sort(v.begin(), v.end());

    ll start = 0;
    ll li = n - 1;
    for (ll &vi : v)
    {
        ll end = start + vi - 1;
        ll sum = 0;
        ll left = li - start + 1;
        ll take = end - start + 1;

        if (left < take)
            break;

        for (ll i = start; i <= end; i++)
            sum += p[i];

        sum -= p[end];

        ans += sum;
        start = end + 1;
    }

    for (ll i = start; i < n; i++)
        ans += p[i];

    cout << ans << endl;
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