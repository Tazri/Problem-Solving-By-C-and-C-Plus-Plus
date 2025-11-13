// linK : https://codeforces.com/problemset/problem/1832/B
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
    vector<ll> v(n + 1, 0);

    for (ll i = 1; i <= n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    ll l = 1;
    l += (k * 2);

    for (ll i = 1; i <= n; i++)
        v[i] += v[i - 1];

    ll r = n;
    ll ans = -1;

    while (k--)
    {
        ll sum = v[r] - v[l - 1];
        if (ans == -1)
            ans = sum;
        ans = max(ans, sum);
        r--;
        l -= 2;
    }
    ll sum = v[r] - v[l - 1];
    ans = max(ans, sum);
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