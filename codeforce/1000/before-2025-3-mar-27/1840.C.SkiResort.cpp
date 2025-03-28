// link : https://codeforces.com/problemset/problem/1840/C
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

ll sum(ll c, ll k)
{
    ll n = c - k + 1;
    ll sum = (n * (n + 1)) / 2;
    return sum;
}

void program()
{
    ll n, k, q;

    cin >> n >> k >> q;

    ll len = 0;
    ll now;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> now;

        if (now <= q)
        {
            len++;
            continue;
        }

        if (!len)
            continue;

        if (len >= k)
            ans += sum(len, k);
        len = 0;
    }
    if (len >= k)
        ans += sum(len, k);
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