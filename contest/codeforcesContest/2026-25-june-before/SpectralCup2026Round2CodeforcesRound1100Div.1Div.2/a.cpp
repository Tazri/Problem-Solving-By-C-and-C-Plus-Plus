#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int check(vector<int> v, int x)
{
    int n = v.size();
    int mx;
    for (int i = 0; i < n; i++)
    {
        int d = abs(v[i] - x);
        if (i == 0)
            mx = d;
        mx = max(mx, d);
    }

    return mx;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    int mn = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
        {
            mn = v[i];
            mx = v[i];
        }
        mn = min(mn, v[i]);
        mx = max(mx, v[i]);
    }

    int len = mx - mn + 1;

    if (len == 1)
    {
        int mid = (mx + mn) / 2;

        cout << check(v, mid) << endl;
        return;
    }

    int mid1 = (mx + mn) / 2;
    int mid2 = mid1 + 1;

    cout << min(check(v, mid1), check(v, mid2)) << endl;
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