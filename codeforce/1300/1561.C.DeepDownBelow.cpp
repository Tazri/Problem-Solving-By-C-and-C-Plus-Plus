// link : https://codeforces.com/problemset/problem/1561/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool fight(vector<int> &v, int power)
{
    for (int &vi : v)
    {
        if (power > vi)
            power++;
        else
            return false;
    }

    return true;
}

int find(vector<int> &v)
{
    int n = v.size();
    int mn, mx;

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            mn = v[i];
            mx = v[i];
        }

        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }

    int left = 1;
    int right = mx + 123;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (fight(v, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return ans;
}

bool fightAgain(vector<pair<int, int>> &v, int power)
{
    int n = v.size();

    for (int i = 0; i < n; i++)
    {
        if (power >= v[i].first)
        {
            power += v[i].second;
        }
        else
            return false;
    }

    return true;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        vector<int> a(k);

        for (int i = 0; i < k; i++)
            cin >> a[i];

        int f = find(a);

        v[i].first = f;
        v[i].second = k;
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b)
         {
        if(a.first == b.first){
           return a.second > b.second;
        }
        return a.first < b.first; });

    int left = v[0].first;
    int right = v.back().first + 123;
    int ans = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (fightAgain(v, mid))
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