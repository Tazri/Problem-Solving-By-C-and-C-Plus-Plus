// link : https://codeforces.com/contest/2222/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool check(int eq, int less, int greater)
{
    return less + eq > greater && greater + eq > less;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<int> sv(n + 1);
    vector<int> dp(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        sv[i] = v[i];
    }

    sort(sv.begin(), sv.end());
    int mid = sv[(n + 1) / 2];

    vector<int> valid(n + 1, false);
    valid[0] = true;

    for (int i = 1; i <= n; i++)
    {
        int eq = 0;
        int less = 0;
        int greater = 0;

        for (int j = i; j >= 1; j--)
        {
            if (v[j] == mid)
                eq++;
            else if (v[j] < mid)
                less++;
            else
                greater++;

            if ((i - j + 1) % 2 == 0)
                continue;

            if (check(eq, less, greater) && valid[j - 1])
            {
                dp[i] = max(dp[i], dp[j - 1] + 1);
                valid[i] = true;
            }
        }
    }

    cout << dp[n] << endl;
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