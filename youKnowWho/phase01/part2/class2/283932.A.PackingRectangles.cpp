// link:  https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

ll w, h, n;

bool isPossible(ll size)
{
    if (size < w || size < h)
        return false;

    ll can = (size / w) * (size / h);

    return can >= n;
}

void program()
{
    cin >> w >> h >> n;
    ll l = 0;
    ll r = 3e18;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (isPossible(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();

    program();
    return 0;
}