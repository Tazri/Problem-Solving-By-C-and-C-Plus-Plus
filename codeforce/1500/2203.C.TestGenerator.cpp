// link : https://codeforces.com/problemset/problem/2203/C

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

bool check(vector<int> &v, int s, int lm)
{
    for (int vi : v)
    {
        int mn = min(lm, (s / vi));

        s -= (mn * vi);
    }

    return s == 0;
}

void _DIBBA(int _DIBBA_NO)
{
    int s, m;
    cin >> s >> m;

    vector<int> v;
    v.reserve(100);

    for (int i = 0; i < 62; i++)
    {
        if (m & (1LL << i))
        {
            v.push_back(1ll << i);
        }
    }

    reverse(v.begin(), v.end());

    int left = 1;
    int right = 1e18;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (check(v, s, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << ans << endl;
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