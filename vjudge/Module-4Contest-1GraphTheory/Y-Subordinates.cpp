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
    vector<vector<int>> graph(n + 1);
    vector<bool> bss(n + 1, false);
    for (int from = 2; from <= n; from++)
    {
        int to;
        cin >> to;
        graph[from].push_back(to);
        bss[to] = true;
    }

    vector<int> sources;

    for (int i = 1; i <= n; i++)
        if (!bss[i])
            sources.push_back(i);

    vector<int> ans(n + 1, 0);
    vector<bool> visited(n + 1, false);

    queue<int> q;
    for (int si : sources)
    {
        q.push(si);
        visited[si] = true;
    }

    while (q.size())
    {
        int from = q.front();
        q.pop();

        for (int to : graph[from])
        {
            ans[to] += ans[from] + 1;
            if (visited[to])
                continue;
            visited[to] = true;
            q.push(to);
        }
    }

    for (int i = 1; i <= n; i++)
        cout << ans[i] << " \n"[i == n];
}

int main()
{
    optimize();
    program();
    return 0;
}