// link : https://codeforces.com/problemset/problem/1907/D
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

bool isInside(pair<int, int> p, int x)
{
    return p.first <= x && x <= p.second;
}

bool aInB(pair<int, int> a, pair<int, int> b)
{
    return b.first <= a.first && a.second <= b.second;
}

bool check(vector<pair<int, int>> &v, int k)
{
    int n = v.size();
    pair<int, int> point = {0, 0};

    for (int i = 0; i < n; i++)
    {
        if (aInB(v[i], point))
        {
            point = v[i];
            continue;
        }

        if (aInB(point, v[i]))
        {
            int left = max(point.first - k, v[i].first);
            int right = min(point.second + k, v[i].second);
            point.first = left;
            point.second = right;
            continue;
        }

        if (point.first <= v[i].first && v[i].first <= point.second)
        {
            int left = v[i].first;
            int right = min(point.second + k, v[i].second);
            point.first = left;
            point.second = right;
            continue;
        }

        if (point.first <= v[i].second && v[i].second <= point.second)
        {
            int right = v[i].second;
            int left = max(point.first - k, v[i].first);
            point.first = left;
            point.second = right;
            continue;
        }

        if (point.second < v[i].first)
        {
            if (point.second + k < v[i].first)
                return false;

            int right = min(point.second + k, v[i].second);
            int left = v[i].first;

            point.first = left;
            point.second = right;
            continue;
        }

        if (v[i].second < point.first - k)
            return false;

        int left = max(point.first - k, v[i].first);
        int right = v[i].second;

        point.first = left;
        point.second = right;
    }

    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);

    int mx;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;

        if (i == 0)
            mx = v[i].second;

        mx = max(mx, v[i].second);
    }

    int left = 0;
    int right = mx + 1234;
    int ans = -1;
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