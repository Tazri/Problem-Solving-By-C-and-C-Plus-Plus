// link : https://codeforces.com/problemset/problem/1934/B

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
    int N;
    cin >> N;
    vector<int> v = {15, 6, 3, 1};
    int ans = -1;
    for (int i = 0; i <= 2; i++)
    {
        int n = N;
        int cost = i * 10;
        int take = 0;

        if (n >= cost)
        {
            n -= cost;
            take = i;
        }

        for (int j = 0; j < v.size(); j++)
        {
            if (n == 0)
                break;
            take += (n / v[j]);
            n %= v[j];
        }

        if (ans == -1)
            ans = take;
        ans = min(take, ans);
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