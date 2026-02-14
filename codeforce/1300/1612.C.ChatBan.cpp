// linK:  https://codeforces.com/problemset/problem/1612/C
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
#define int ll
int k, x;

bool canSend(int m)
{
    int totalEmot = 0;

    if (m <= k)
    {
        totalEmot += ((m * (m + 1)) / 2);

        return totalEmot - m < x;
    }

    totalEmot += ((k * (k + 1)) / 2);
    m -= k;
    int last = k - m;
    totalEmot += (m * k) - ((m * (m + 1)) / 2);

    return totalEmot - last < x;
}

void program()
{
    cin >> k >> x;

    int l = 1;
    int r = k + (k - 1);
    int ans = 0;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (canSend(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}