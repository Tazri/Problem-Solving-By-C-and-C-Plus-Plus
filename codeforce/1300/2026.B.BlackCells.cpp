// link : https://codeforces.com/problemset/problem/2026/B
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

bool check(vector<int> &v, int k)
{
    int n = v.size();

    bool used = false;

    int i = 0;

    while (i < n)
    {
        if (i == n - 1)
        {
            if (used)
                return false;
            used = true;
            i++;
            continue;
        }

        int d = v[i + 1] - v[i];

        if (d <= k)
        {
            i += 2;
            continue;
        }

        if (used)
            return false;
        used = true;
        i++;
    }

    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    int left = 1;
    int right = v.back() - v.front();
    int ans = 0;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (check(v, mid))
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