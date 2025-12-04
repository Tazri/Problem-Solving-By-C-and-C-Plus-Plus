// link : https://cses.fi/problemset/task/1667
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

int n, m;
vector<vector<int>> graph;
vector<int> comeFrom;

bool isValid(int i)
{
    return comeFrom[i] == 0;
}
void program()
{
    cin >> n >> m;

    graph = vector<vector<int>>(n + 1);
    comeFrom = vector<int>(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        int from, to;
        cin >> from >> to;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    comeFrom[1] = 1;
    queue<int> q;
    q.push(1);
    bool isReach = false;
    while (q.size())
    {
        int i = q.front();
        q.pop();

        if (i == n)
        {
            isReach = true;
            break;
        }

        for (int to : graph[i])
        {
            if (isValid(to))
            {
                comeFrom[to] = i;
                q.push(to);
            }
        }
    }

    if (!isReach)
    {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    vector<int> ans;
    ans.reserve(n);

    ans.push_back(n);
    int i = n;
    while (i != 1)
    {
        ans.push_back(comeFrom[i]);
        i = comeFrom[i];
    }

    cout << ans.size() << endl;
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[ans.size() - 1 == i];
}

int main()
{
    optimize();
    program();
    return 0;
}