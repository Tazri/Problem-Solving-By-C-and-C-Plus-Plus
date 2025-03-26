// link : https://atcoder.jp/contests/abc311/tasks/abc311_c?lang=en
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

int main()
{
    optimize();
    int n;
    cin >> n;
    vector<int> graph(n + 1, 0);
    vector<bool> visit(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        int ai;
        cin >> ai;
        graph[i] = ai;
    }

    // find the repeat point
    int node = 1;
    while (true)
    {
        if (visit[node])
        {
            break;
        }

        visit[node] = true;
        // go next
        node = graph[node];
    }

    vector<int> ans;
    ans.push_back(node);

    int stopNode = node;
    node = graph[node];
    while (true)
    {
        if (stopNode == node)
        {
            break;
        }

        ans.push_back(node);
        node = graph[node];
    }

    int m = ans.size();

    cout << m << endl;
    cout << ans[0];
    for (int i = 1; i < m; i++)
    {
        cout << " " << ans[i];
    }
    cout << endl;
    return 0;
}