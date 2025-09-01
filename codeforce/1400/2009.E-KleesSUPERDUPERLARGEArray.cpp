// link : https://codeforces.com/problemset/problem/2009/E
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

ll sum(ll l, ll r)
{
    ll n = r - l + 1;

    ll sum = (l + r) * n / 2;

    return sum;
}

ll cal(ll l, ll r, ll point)
{
    ll left = sum(l, point);
    ll right = sum(point + 1, r);

    ll diff = abs(left - right);
    return diff;
}

void program()
{
    ll n, k;
    cin >> n >> k;
    ll left = k;
    ll right = n + k - 1;
    ll l = k;
    ll r = right;
    ll ans = cal(left, right, right);

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        ll leftD = cal(left, right, mid - 1);
        ll midD = cal(left, right, mid);
        ll rightD = cal(left, right, mid + 1);

        ans = min(midD, ans);

        if (rightD < midD)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
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