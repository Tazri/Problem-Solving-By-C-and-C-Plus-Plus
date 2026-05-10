// link : https://codeforces.com/problemset/problem/1701/C
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

bool ok(vector<int> &v, int mans, int time)
{
    int unprof = mans - v.size();
    int unprofCan = (unprof * (time / 2));
    int leftTask = 0;

    for (int vi : v)
    {
        if (time <= vi)
        {
            leftTask += (vi - time);
            continue;
        }

        int leftTime = time - vi;
        int leftCan = leftTime / 2;
        unprofCan += leftCan;
    }

    return leftTask <= unprofCan;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;

    vector<int> mp(n + 1);

    for (int i = 0; i < m; i++)
    {
        int vi;
        cin >> vi;
        mp[vi]++;
    }

    vector<int> v;
    v.reserve(n);
    for (int mi : mp)
        if (mi)
            v.push_back(mi);

    int left = 1;
    int right = m;
    int ans = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (ok(v, n, mid))
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