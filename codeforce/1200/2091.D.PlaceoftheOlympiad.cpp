// link : https://codeforces.com/contest/2091/problem/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

bool ok(int n, int m, int k, int d)
{
    int ex = m % (d + 1);
    int can = (m / (d + 1)) * d;
    int total = n * (can + ex);
    return total >= k;
}

void _DIBBA()
{
    int n, m, k;
    cin >> n >> m >> k;

    int l = 1;
    int r = m;
    int ans = m;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (ok(n, m, k, mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    while (t--)
        _DIBBA();
    0;
}