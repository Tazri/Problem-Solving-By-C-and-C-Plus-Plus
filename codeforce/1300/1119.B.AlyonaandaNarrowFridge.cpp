// link : https://codeforces.com/problemset/problem/1119/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool fill(vector<int> &v, int h)
{
    int n = v.size();
    sort(v.rbegin(), v.rend());

    int i = 0;
    while (i < n)
    {
        if (h < v[i])
            return false;

        h -= v[i];
        i += 2;
    }
    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, h;
    cin >> n >> h;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int left = 0;
    int right = n - 1;
    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        vector<int> pre;
        pre.reserve(mid + 1);

        for (int i = 0; i <= mid; i++)
            pre.push_back(v[i]);

        if (fill(pre, h))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans + 1 << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}