// link : https://codeforces.com/problemset/problem/1741/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int check(vector<int> &v, int lm)
{
    int n = v.size() - 1;

    int l = 1;
    int r = 1;
    int sum = 0;
    int mx = -1;
    while (r <= n)
    {
        sum += v[r];

        if (sum > lm)
            return -1;

        if (sum == lm)
        {
            int len = r - l + 1;
            mx = max(len, mx);
            r++;
            l = r;
            sum = 0;
            continue;
        }

        r++;
    }

    if (sum == 0)
        return mx;
    else
        return -1;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<int> canbe(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += v[i];
        canbe[i] = sum;
    }

    int mn = -1;
    for (int i = 1; i <= n; i++)
    {
        int res = check(v, canbe[i]);

        if (res != -1)
        {
            if (mn == -1)
                mn = res;
            mn = min(res, mn);
        }
    }

    cout << mn << endl;
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