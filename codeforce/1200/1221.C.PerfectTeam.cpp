// link : https://codeforces.com/problemset/problem/1221/C
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
    int c, m, x;
    cin >> c >> m >> x;

    int cnt = 0;

    int mn = min(c, m);
    int mnx = min(mn, x);
    cnt += mnx;
    c = max(c - mnx, 0);
    m = max(m - mnx, 0);

    if (m == 0 || c == 0)
    {
        cout << cnt << endl;
        return;
    }

    mn = min(c, m);
    int mx = max(c, m);

    int add = 0;
    int l = 0;
    int r = mn;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        int left = (mn - mid) + (mx - mid);

        if (left >= mid)
        {
            add = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << cnt + add << endl;
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