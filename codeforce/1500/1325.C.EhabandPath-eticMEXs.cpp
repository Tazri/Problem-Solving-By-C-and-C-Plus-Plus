// link : https://codeforces.com/problemset/problem/1325/C
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<vector<int>> graph;
vector<int> parent;

void dfs(int par, int from)
{
    for (int to : graph[from])
    {
        if (to != par)
        {
            parent[to] = from;
            dfs(from, to);
        }
    }
}

vector<int> runBfs(int rt)
{
    pair<int, int> pr;
    int n = graph.size() - 1;
    vector<int> dist(n + 1, -1);
    dist[rt] = 0;
    queue<int> q;
    q.push(rt);
    vector<bool> vis(n + 1, false);
    vis[rt] = true;

    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (vis[to])
                continue;
            dist[to] = dist[from] + 1;
            vis[to] = true;
            q.push(to);
        }
    }

    return dist;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    graph = vector<vector<int>>(n + 1);
    vector<pair<int, int>> input(n - 1);
    parent = vector<int>(n + 1, 0);
    for (int i = 0; i < n - 1; i++)
    {
        int from, to;
        cin >> from >> to;
        input[i] = {from, to};
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    if (n == 2)
    {
        cout << 0 << endl;
        return;
    }

    vector<int> dist1 = runBfs(1);
    int point = 1;

    for (int i = 1; i <= n; i++)
    {
        if (dist1[point] < dist1[i])
            point = i;
    }

    int p1 = point;
    vector<int> dist2 = runBfs(p1);
    point = 1;

    for (int i = 1; i <= n; i++)
    {
        if (dist2[point] < dist2[i])
            point = i;
    }
    int p2 = point;

    // cout << p1 << " " << p2 << endl;
    dfs(0, p1);

    int curr = p2;
    vector<int> path;
    while (curr != 0)
    {
        path.push_back(curr);
        curr = parent[curr];
    }

    stack<int> stk;
    map<pair<int, int>, int> mp;

    for (int i = 3; i < n - 1; i++)
        stk.push(i);

    // for (int pi : path)
    //     cout << pi << " ";
    // cout << endl;

    for (int i = 2; i < path.size() - 1 && stk.size() > 0; i++)
    {
        int prev = path[i - 1];
        int curr = path[i];
        int mn = min(prev, curr);
        int mx = max(prev, curr);
        mp[{mn, mx}] = stk.top();
        stk.pop();
    }

    int fi = path[0];
    int fi1 = path[1];
    mp[{min(fi, fi1), max(fi, fi1)}] = 0;
    int li = path.back();
    int li1 = path[path.size() - 2];
    mp[{min(li, li1), max(li, li1)}] = 1;

    stk.push(2);

    vector<int> ans(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        int from, to;
        from = input[i].first;
        to = input[i].second;
        pair<int, int> pr = {min(from, to), max(from, to)};

        if (mp.count(pr))
        {
            ans[i] = mp[pr];
        }
        else
        {
            ans[i] = stk.top();
            stk.pop();
        }
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}