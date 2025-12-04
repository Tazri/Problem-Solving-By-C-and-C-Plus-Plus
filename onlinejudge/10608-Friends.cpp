// link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1549&mosmsg=Submission+received+with+ID+30849659
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> graph(n + 1);
    vector<bool> visited(n + 1, false);
    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    int mx = 0;

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        queue<int> q;
        q.push(i);
        visited[i] = true;
        int cnt = 0;
        while (q.size())
        {
            int from = q.front();
            q.pop();
            cnt++;

            for (int to : graph[from])
            {
                if (visited[to])
                    continue;

                visited[to] = true;
                q.push(to);
            }
        }

        mx = max(cnt, mx);
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}