// link : https://codeforces.com/problemset/problem/1520/E
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

int fn(int n)
{
    if (n <= 0)
        return 0;

    return ((n + 1) * n) / 2;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    vector<int> cnt(n + 1, 0);
    vector<bool> has(n + 1, false);
    vector<int> index(n + 1, 0);

    for (int i = 0; i < n; i++)
        if (s[i] == '*')
            cnt[i + 1] = 1;

    for (int i = 1; i <= n; i++)
        if (cnt[i])
        {
            index[i] = i;
            has[i] = true;
        }

    // for (int i = 1; i <= n; i++)
    //     cout << cnt[i] << " \n"[i == n];

    // for (int i = 1; i <= n; i++)
    //     cout << index[i] << " \n"[i == n];

    for (int i = 1; i <= n; i++)
    {
        cnt[i] += cnt[i - 1];
        index[i] += index[i - 1];
    }

    // for (int i = 1; i <= n; i++)
    //     cout << cnt[i] << " \n"[i == n];

    // for (int i = 1; i <= n; i++)
    //     cout << index[i] << " \n"[i == n];

    int mn = -1;

    for (int i = 1; i <= n; i++)
    {
        if (has[i] == false)
            continue;

        int rm = i + 1;
        int rightCnt = cnt.back() - cnt[i];
        int rightSum = index.back() - index[i];

        // cout << rightCnt << endl;
        // cout << rightSum << endl;
        int rightTake = rightSum - (rm * rightCnt);
        rightTake -= fn(rightCnt - 1);
        int leftCnt = cnt[i] - 1;
        int leftSum = index[i] - i;
        int leftTake = (leftCnt * i) - leftSum - leftCnt;
        leftTake -= fn(leftCnt - 1);
        int total = leftTake + rightTake;

        if (mn == -1)
            mn = total;
        mn = min(total, mn);
    }

    cout << max(mn, 0LL) << endl;
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