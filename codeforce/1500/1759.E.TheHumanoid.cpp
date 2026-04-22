// link : https://codeforces.com/contest/1759/problem/E
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

vector<vector<int>> hm = {{2, 2, 3}, {2, 3, 2}, {3, 2, 2}};

int simulate(vector<int> &v, int h, int hi)
{
    int n = v.size();
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < n; i++)
        pq.push(v[i]);

    int ui = 0;
    while (pq.size() > 0)
    {
        if (pq.top() < h)
        {
            h += (pq.top() / 2);
            pq.pop();
            continue;
        }

        if (ui >= hm[hi].size())
            break;

        h *= hm[hi][ui];
        ui++;
    }

    return n - pq.size();
}

void _DIBBA(int _DIBBA_NO)
{

    int n, h;
    cin >> n >> h;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 0;
    for (int hi = 0; hi < hm.size(); hi++)
    {
        int res = simulate(v, h, hi);

        if (hi == 0)
            ans = res;

        ans = max(ans, res);
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