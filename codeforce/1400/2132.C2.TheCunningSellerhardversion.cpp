// link : https://codeforces.com/problemset/problem/2132/C2
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

bool ok(int k, int x)
{
    k += x;

    return x * 3 <= k;
}

int price(int x)
{
    return binpow(3, x + 1) + x * binpow(3, x - 1);
}

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;

    vector<int> deals;

    int copy_n = n;

    while (n)
    {
        deals.push_back(n % 3);
        n /= 3;
    }

    reverse(deals.begin(), deals.end());
    int cnt = 0;
    for (int di : deals)
    {
        cnt += di;
    }

    if (cnt > k)
    {
        cout << -1 << endl;
        return;
    }

    k = k - cnt;

    // for (int di : deals)
    //     cout << di << " ";
    // cout << endl;

    for (int i = 0; i < deals.size() - 1; i++)
    {
        int left = 0;
        int right = deals[i];
        int can = 0;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (ok(k, mid))
            {
                can = max(can, mid);
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        deals[i] -= can;
        k += can;
        int add = can * 3;
        k -= add;
        deals[i + 1] += add;
    }

    reverse(deals.begin(), deals.end());

    int cost = 0;
    for (int i = 0; i < deals.size(); i++)
    {
        int pr = price(i);

        cost += (pr * deals[i]);
    }

    cout << cost << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}