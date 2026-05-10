// link : https://codeforces.com/problemset/problem/1878/E
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
int TOTAL_BITS = 30;

int query(vector<vector<int>> &cnt, int l, int r)
{
    int n = cnt.size();
    int ans = 0;
    int total = r - l + 1;

    for (int i = 0; i < TOTAL_BITS; i++)
    {
        int one = cnt[r][i] - cnt[l - 1][i];

        if (one == total)
        {
            ans += (1LL << i);
        }
    }

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n + 1);

    vector<vector<int>> cnt(n + 1, vector<int>(TOTAL_BITS));

    for (int i = 1; i <= n; i++)
    {
        int vi;
        cin >> vi;
        v[i] = vi;

        for (int j = 0; j < TOTAL_BITS; j++)
        {
            cnt[i][j] = !!(vi & (1LL << j));
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < TOTAL_BITS; j++)
        {
            cnt[i][j] += cnt[i - 1][j];
        }
    }

    int q;
    cin >> q;
    // q = 1;

    vector<int> allAns(q + 1);
    for (int qi = 1; qi <= q; qi++)
    {
        int l, k;
        cin >> l >> k;
        int left = l;
        int right = n;
        int ans = -1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            int qres = query(cnt, l, mid);

            if (qres >= k)
            {
                ans = mid;
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        allAns[qi] = ans;
    }

    for (int i = 1; i <= q; i++)
        cout << allAns[i] << " \n"[i == q];
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