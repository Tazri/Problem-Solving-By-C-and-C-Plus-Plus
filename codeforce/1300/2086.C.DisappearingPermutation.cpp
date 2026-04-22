// link : https://codeforces.com/problemset/problem/2086/C
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
    int n;
    cin >> n;
    vector<int> v(n + 1);
    vector<int> q(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
        cin >> q[i];

    map<int, int> mp;
    map<int, int> sz;
    vector<bool> visited(n + 1, false);
    int id = 1;
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        vector<int> nodes;

        queue<int> q;
        bool isCycle = false;
        nodes.push_back(i);
        q.push(i);
        visited[i] = true;

        while (q.size() > 0)
        {
            int from = q.front();
            q.pop();

            int to = v[from];

            if (visited[to])
            {
                isCycle = true;
                break;
            }

            visited[to] = true;
            nodes.push_back(to);
            q.push(to);
        }

        if (isCycle)
        {
            for (int ni : nodes)
            {
                mp[ni] = id;
            }

            sz[id++] = nodes.size();
        }
    }

    vector<bool> broken(id, false);
    int need = 0;
    vector<int> ans;
    ans.reserve(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int nd = q[i];

        int nid = mp[nd];

        if (broken[nid])
        {
            ans.push_back(need);
            continue;
        }

        need += sz[nid];
        broken[nid] = true;
        ans.push_back(need);
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
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