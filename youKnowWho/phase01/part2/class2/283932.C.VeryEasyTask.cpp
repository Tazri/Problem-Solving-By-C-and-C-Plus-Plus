// link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
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

bool can(int n, int mn, int mx, int sec)
{
    if (sec < mn)
        return false;
    sec -= mn;

    int did = 1 + (sec / mn) + (sec / mx);

    return did >= n;
}

void program()
{
    int n, x, y;
    cin >> n >> x >> y;
    int mn = min(x, y);
    int mx = max(x, y);

    int l = 1;
    int r = mn * n;
    int ans = mn * n;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (can(n, mn, mx, mid))
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
    optimize();
    program();
    return 0;
}