// link : https://codeforces.com/problemset/problem/1283/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<int> di = {1, -1};

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;
    vector<int> ans;
    ans.reserve(n + 123);

    set<int> visited;
    vector<int> source(n);
    for (int i = 0; i < n; i++)
        cin >> source[i];

    queue<int> q;
    map<int, int> dist;
    for (int si : source)
    {
        visited.insert(si);
        dist[si] = 0;
        q.push(si);
    }

    int distance = 0;

    while (ans.size() < 2 * m && q.size() > 0)
    {
        int from = q.front();
        q.pop();

        for (int i = 0; i < 2; i++)
        {
            int to = from + di[i];

            if (visited.count(to))
                continue;
            dist[to] = dist[from] + 1;
            visited.insert(to);
            ans.push_back(to);
            q.push(to);
        }
    }

    vector<pair<int, int>> final;

    for (int ai : ans)
    {
        final.push_back({dist[ai], ai});
    }

    sort(final.begin(), final.end());
    int d = 0;

    for (int i = 0; i < m; i++)
        d += final[i].first;

    cout << d << endl;
    for (int i = 0; i < m; i++)
        cout << final[i].second << " \n"[i == m - 1];
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