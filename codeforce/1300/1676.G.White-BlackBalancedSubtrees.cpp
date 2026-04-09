// link : https://codeforces.com/problemset/problem/1676/G
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int black = 0;
int white = 1;

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    vector<vector<int>> graph(n + 1);
    string s;

    vector<int> color(n + 1);

    for (int i = 2; i <= n; i++)
    {
        int from = i;
        int to;
        cin >> to;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'W')
            color[i + 1] = white;
        else
            color[i + 1] = black;
    }

    vector<int> level(n + 1);
    vector<bool> visited(n + 1, false);

    queue<int> q;
    q.push(1);
    visited[1] = true;
    level[1] = 1;
    int mxLevel = 1;
    while (q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            if (visited[to])
                continue;

            level[to] = level[from] + 1;
            mxLevel = max(level[to], mxLevel);

            q.push(to);
            visited[to] = true;
        }
    }

    vector<vector<int>> levelGraph(mxLevel + 1);

    for (int i = 1; i <= n; i++)
    {
        levelGraph[level[i]].push_back(i);
    }

    vector<int> blackCount(n + 1, 0);
    vector<int> whiteCount(n + 1, 0);

    visited = vector<bool>(n + 1, false);

    for (int l = mxLevel; l >= 1; l--)
    {
        for (int from : levelGraph[l])
        {
            if (color[from] == white)
                whiteCount[from]++;
            else
                blackCount[from]++;

            visited[from] = true;

            for (int to : graph[from])
            {
                if (visited[to])
                    continue;

                blackCount[to] += blackCount[from];
                whiteCount[to] += whiteCount[from];
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (whiteCount[i] == blackCount[i])
            cnt++;
    }

    cout << cnt << endl;
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