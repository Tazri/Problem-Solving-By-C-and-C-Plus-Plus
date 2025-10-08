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

struct Edge
{
    ll u, v, k;
};

struct Vertix
{
    ll gone;
    ll cost;
    ll v;
    ll add = 0;
};

void program()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> e(m);

    for (ll i = 0; i < m; i++)
        cin >> e[i];

    vector<Edge> inputs(n - 1);
    vector<vector<pair<ll, ll>>> graph(n + 1, vector<pair<ll, ll>>(n + 1, {0, 0}));

    for (ll i = 0; i < n - 1; i++)
    {
        cin >> inputs[i].u >> inputs[i].v >> inputs[i].k;

        graph[inputs[i].u][inputs[i].v] = {inputs[i].k, 1};
    }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "(" << graph[i][j].first << "," << graph[i][j].second << ") ";
    //     }
    //     cout << endl;
    // }

    queue<Vertix> qu;
    for (ll i = 1; i <= n; i++)
    {
        if (graph[1][i].second > 0)
        {
            Vertix v;
            v.v = i;
            v.add = 0;
            v.gone = 1;
            v.cost = graph[1][i].first;
            qu.push(v);
        }
    }

    vector<ll> costs;

    while (!qu.empty())
    {
        Vertix v = qu.front();
        qu.pop();

        bool found = false;
        for (ll i = 1; i <= n; i++)
        {
            if (graph[v.v][i].second == 0)
                continue;
            found = true;

            Vertix to;
            to.v = i;
            to.add = (v.cost * v.gone) + v.add;
            to.gone = v.gone + 1;
            to.cost = graph[v.v][i].first;
            qu.push(to);
        }

        if (!found)
        {
            ll cost = (v.gone * v.cost) + v.add;
            costs.push_back(cost);
        }
    }

    sort(costs.begin(), costs.end());
    sort(e.begin(), e.end());

    ll ci = 0;
    ll ei = 0;
    ll count = 0;

    while (ci < costs.size() && ei < e.size())
    {
        if (costs[ci] <= e[ei])
        {
            count++;
            ei++;
            ci++;
            continue;
        }
        ei++;
    }

    cout << count << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}