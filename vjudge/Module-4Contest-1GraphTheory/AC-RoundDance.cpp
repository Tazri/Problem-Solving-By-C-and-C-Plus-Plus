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
    int n;
    cin >> n;

    vector<set<int>> graph(n + 1);
    vector<int> parent(n + 1, 0);
    vector<bool> visited(n + 1, false);

    int cmp = 0;
    int cycle = 0;

    for (int i = 1; i <= n; i++)
    {
        int to = i;
        int from;
        cin >> from;

        graph[from].insert(to);
        graph[to].insert(from);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        cmp++;
        visited[i] = true;
        queue<int> q;
        q.push(i);
        bool isCycle = false;
        while (q.size())
        {
            int from = q.front();
            q.pop();

            for (int to : graph[from])
            {

                if (visited[to])
                {
                    if (parent[from] == to)
                        continue;

                    isCycle = true;
                    continue;
                }

                visited[to] = true;
                parent[to] = from;
                q.push(to);
            }
        }
        if (isCycle)
            cycle++;
    }

    int mx = cmp;
    int mn = cycle;
    if (cmp - cycle > 0)
        mn += 1;
    cout << mn << " " << mx << endl;
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