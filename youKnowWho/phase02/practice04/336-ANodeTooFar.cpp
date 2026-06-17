// link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=272&mosmsg=Submission+received+with+ID+31180428
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

int _DIBBA_NO = 1;

void _DIBBA(int nc)
{
    set<string> st;
    vector<pair<string, string>> input(nc);

    for (int i = 0; i < nc; i++)
    {
        cin >> input[i].first >> input[i].second;
        st.insert(input[i].first);
        st.insert(input[i].second);
    }

    int id = 1;
    map<string, int> mp;
    for (string si : st)
    {
        mp[si] = id++;
    }

    int n = st.size();

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < nc; i++)
    {
        int from = mp[input[i].first];
        int to = mp[input[i].second];
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    while (true)
    {
        string actualNode;
        int ttl;
        cin >> actualNode >> ttl;
        if (actualNode == "0" && ttl == 0)
            break;

        if (mp.find(actualNode) == mp.end())
        {
            cout << "Case " << _DIBBA_NO << ": ";
            cout << n << " nodes not reachable from node ";
            cout << actualNode << " with TTL = ";
            cout << ttl << "." << endl;
            _DIBBA_NO++;
            continue;
        }

        int node = mp[actualNode];
        vector<bool> visited(n + 1, false);
        vector<int> dist(n + 1, -1);
        dist[node] = 0;
        visited[node] = true;
        queue<int> q;
        q.push(node);

        while (q.size() > 0)
        {
            int from = q.front();
            q.pop();

            for (int to : graph[from])
            {
                if (visited[to])
                {
                    continue;
                }

                visited[to] = true;
                q.push(to);
                dist[to] = dist[from] + 1;
            }
        }

        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (dist[i] != -1 && dist[i] <= ttl)
                cnt++;
        }

        int ans = n - cnt;

        cout << "Case " << _DIBBA_NO << ": ";
        cout << ans << " nodes not reachable from node ";
        cout << actualNode << " with TTL = ";
        cout << ttl << ".";
        cout << endl;
        _DIBBA_NO++;
    }
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    int nc;
    while (true)
    {
        cin >> nc;
        if (nc == 0)
            break;

        _DIBBA(nc);
        t++;
    }
    return 0;
}