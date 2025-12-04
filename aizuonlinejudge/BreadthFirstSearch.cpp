// link : https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_11_C
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

int n;
vector<vector<int>> graph;
vector<int> ans;

void program()
{
    cin >> n;
    graph = vector<vector<int>>(n + 1);
    ans = vector<int>(n + 1, -1);

    for (int i = 0; i < n; i++)
    {
        int from, k;
        cin >> from >> k;

        for (int j = 0; j < k; j++)
        {
            int to;
            cin >> to;
            graph[from].push_back(to);
        }
    }

    ans[1] = 0;
    queue<pair<int, int>> q;
    q.push({1, 0});

    while (q.size())
    {
        pair<int, int> p = q.front();
        q.pop();
        int from = p.first;
        int turn = p.second;

        for (int to : graph[from])
        {
            if (ans[to] != -1)
                continue;

            ans[to] = turn + 1;
            q.push({to, turn + 1});
        }
    }

    for (int i = 1; i <= n; i++)
        cout << i << " " << ans[i] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}