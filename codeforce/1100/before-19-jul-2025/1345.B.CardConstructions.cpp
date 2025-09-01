// link : https://codeforces.com/problemset/problem/1345/B
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

ll takeforh(ll h)
{
    ll base = h * 2;
    ll n = h - 1;
    ll totalTriangle = (n * (n + 1) / 2);
    ll totalNeed = base + (totalTriangle * 3);

    return totalNeed;
}

ll maxCreate(int n)
{
    ll mx = 0;

    ll l = 1;
    ll r = n;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        ll takes = takeforh(mid);

        if (takes <= n)
        {
            mx = max(mx, takes);
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return mx;
}

void program()
{
    ll n;
    cin >> n;

    ll ans = 0;

    while (n > 1)
    {
        ll takes = maxCreate(n);
        ans++;
        n -= takes;
    }

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