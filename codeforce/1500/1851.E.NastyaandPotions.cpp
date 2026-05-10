// link : https://codeforces.com/problemset/problem/1851/E
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

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;
    vector<int> coin(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> coin[i];

    set<int> st;

    for (int i = 0; i < k; i++)
    {
        int pi;
        cin >> pi;

        st.insert(pi);
    }

    vector<vector<int>> graph(n + 1);
    vector<int> sz(n + 1);
    vector<vector<int>> li(n + 1);
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        int m;
        cin >> m;

        for (int j = 0; j < m; j++)
        {
            int to;
            cin >> to;
            graph[i].push_back(to);
            li[to].push_back(i);
        }
        sz[i] = m;
        if (m == 0)
            q.push(i);
    }

    vector<int> srt;
    srt.reserve(n);
    while (q.size() > 0)
    {
        int from = q.front();
        srt.push_back(from);
        q.pop();

        for (int di : li[from])
        {
            sz[di]--;
            if (sz[di] == 0)
                q.push(di);
        }
    }

    vector<int> ans(n + 1);

    for (int i : srt)
    {
        if (st.count(i))
        {
            coin[i] = 0;
            ans[i] = coin[i];
            continue;
        }
        if (graph[i].size() == 0)
        {
            if (st.count(i))
                coin[i] = 0;
            ans[i] = coin[i];
            continue;
        }
        int price = 0;
        for (int to : graph[i])
        {
            if (st.count(to))
                continue;

            price += coin[to];
        }

        int mn = min(price, coin[i]);
        ans[i] = mn;
        coin[i] = mn;
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
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