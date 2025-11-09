// link : https://codeforces.com/problemset/problem/580/C
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
vector<vector<int>> tree;
vector<bool> cat;
vector<bool> reach;
vector<bool> visited;
int ans = 0;

void dfs(int i, int c)
{
    if (cat[i])
        c++;

    if (c > m)
        return;

    if (visited[i])
        return;
    reach[i] = true;
    visited[i] = true;

    if (tree[i].size() == 1 && i != 1)
    {
        ans++;
    }

    if (!cat[i])
        c = 0;

    for (int child : tree[i])
        dfs(child, c);
}

void program()
{
    cin >> n >> m;
    tree = vector<vector<int>>(n + 1);
    cat = vector<bool>(n + 1, false);
    reach = vector<bool>(n + 1, false);
    visited = vector<bool>(n + 1, false);

    for (int i = 1; i <= n; i++)
    {
        int ai;
        cin >> ai;

        if (ai)
            cat[i] = true;
    }

    for (int i = 1; i < n; i++)
    {
        int from, to;
        cin >> from >> to;
        tree[from].push_back(to);
        tree[to].push_back(from);
    }

    dfs(1, 0);

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}