// link : https://cses.fi/problemset/task/2422
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

ll n;

ll countFn(ll mid)
{
    ll cnt = 0;

    for (ll i = 1; i <= n; i++)
    {
        ll c = min(n, mid / i);
        cnt += c;
    }

    return cnt;
}

void program()
{
    cin >> n;

    ll l = 1;
    ll r = n * n;
    ll total = n * n;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll cnt = countFn(mid);
        ll target = (total + 1) / 2;

        if (cnt >= target)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}