// link : https://codeforces.com/problemset/problem/1846/E1
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

bool ok(int k, int n)
{
    n--;

    int l = 2;
    int r = 31;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        int x = mid;

        int ans = 1;

        for (int i = 0; i < mid; i++)
        {
            ans *= k;

            if (ans > n)
                break;
        }

        if (ans > n)
        {
            r = mid - 1;
            continue;
        }

        ans -= 1;
        ans /= (k - 1);
        ans *= k;

        if (ans == n)
            return true;

        if (ans > n)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    return false;
}

void _DIBBA(int _DIBBA_NO)
{

    int n;
    cin >> n;
    int r = n - 1;
    vector<int> v;

    for (int i = 2; i * i <= r; i++)
    {
        if (r % i != 0)
            continue;

        v.push_back(i);

        if (r / i != i)
            v.push_back(r / i);
    }

    for (int k : v)
    {
        if (ok(k, n))
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
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