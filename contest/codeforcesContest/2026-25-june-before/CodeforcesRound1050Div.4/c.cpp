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
    ll ans = 0;
    ll pos = 0;

    ll now = 0;

    for (ll i = 0; i < n; i++)
    {
        ll t, p;
        cin >> t >> p;
        ll left = t - now;

        // turn
        if (p == pos)
            ans += (left & 1 ? left - 1 : left);
        else
        {
            ans++;
            left--;
            ans += (left & 1 ? left - 1 : left);
            pos = p;
        }

        now = t;
    }

    ll l = m - now;
    ans += l;

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