// link : https://www.codechef.com/problems/GAMENUMB
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> v(n);

    int cards = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].second;
        cards += v[i].second;
    }

    sort(v.begin(), v.end());

    int l = 0;
    int r = n - 1;
    for (int i = 1; i <= k; i++)
    {
        int take;
        cin >> take;
        int rm = cards - take;
        cards -= rm;
        if (i & 1)
        {
            while (rm)
            {
                int mn = min(rm, v[l].second);
                v[l].second = v[l].second - mn;
                rm -= mn;
                if (v[l].second == 0)
                    l++;
            }
        }
        else
        {
            while (rm)
            {
                int mn = min(rm, v[r].second);
                v[r].second = v[r].second - mn;
                rm -= mn;
                if (v[r].second == 0)
                    r--;
            }
        }
    }

    int ans = 0;

    for (int i = l; i <= r; i++)
    {
        ans += (v[i].first * v[i].second);
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