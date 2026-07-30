// link : https://codeforces.com/contest/2242/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    v.clear();
    for (pair<int, int> p : mp)
        v.push_back(p.second);

    sort(v.begin(), v.end());

    n = v.size();

    int ans = 0;
    vector<int> suff(n);
    suff[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suff[i] = v[i] + suff[i + 1];
    }

    int pre = 0;
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && v[i] == v[i - 1])
        {
            pre = v[i];
            continue;
        }

        int rm = v[i] - pre - 1;
        int right = (n - 1 - i + 1);
        int sum = suff[i] - (pre * right);
        sum -= (rm * right);

        if (sum <= k)
        {
            int left = k - sum;
            if (left % right == 0)
                ans++;
        }
        pre = v[i];
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