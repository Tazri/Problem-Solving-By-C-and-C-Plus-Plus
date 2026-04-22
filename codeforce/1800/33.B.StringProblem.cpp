// link : https://codeforces.com/problemset/problem/33/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int n = (int)'z' - (int)'a' + 1;
int inf = INT32_MAX;
vector<vector<int>> allDist(n, vector<int>(n, inf));
void calculate(int source, vector<vector<pair<int, int>>> &graph)
{
    allDist[source][source] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    pq.push({allDist[source][source], source});

    while (pq.size() > 0)
    {
        pair<int, int> prfrom = pq.top();
        pq.pop();

        int from = prfrom.second;
        int fromCost = prfrom.first;

        if (allDist[source][from] < fromCost)
            continue;

        for (pair<int, int> prto : graph[from])
        {
            int cost = prto.first;
            int to = prto.second;

            if (allDist[source][from] + cost < allDist[source][to])
            {
                allDist[source][to] = allDist[source][from] + cost;
                pq.push({allDist[source][to], to});
            }
        }
    }
}

void _DIBBA(int _DIBBA_NO)
{
    string s;
    string t;
    cin >> s >> t;

    if (s.size() != t.size())
    {
        cout << -1 << endl;
        return;
    }

    int m;
    cin >> m;

    vector<vector<pair<int, int>>> graph(n);

    for (int i = 0; i < m; i++)
    {
        char cfrom, cto;
        int cost;
        cin >> cfrom >> cto >> cost;
        int from = (int)cfrom - (int)'a';
        int to = (int)cto - (int)'a';

        graph[from].push_back({cost, to});
    }

    for (int i = 0; i < n; i++)
        calculate(i, graph);

    string ans(s.size(), 'a');
    int ansCost = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
        {
            ans[i] = s[i];
            continue;
        }

        int chsi = (int)s[i] - (int)'a';
        int chti = (int)t[i] - (int)'a';

        vector<pair<int, char>> allCost;

        if (allDist[chsi][chti] != inf)
        {
            allCost.push_back({allDist[chsi][chti], t[i]});
        }

        if (allDist[chti][chsi] != inf)
        {
            allCost.push_back({allDist[chti][chsi], s[i]});
        }

        for (int k = 0; k < n; k++)
        {
            if (k == chsi || k == chti)
                continue;

            if (allDist[chsi][k] == inf || allDist[chti][k] == inf)
                continue;

            int mn = allDist[chsi][k] + allDist[chti][k];
            char ch = k + 'a';
            allCost.push_back({mn, ch});
        }

        if (allCost.size() == 0)
        {
            cout << -1 << endl;
            return;
        }

        int mn;

        for (int j = 0; j < allCost.size(); j++)
        {
            if (j == 0)
                mn = allCost[j].first;
            mn = min(mn, allCost[j].first);
        }

        ansCost += mn;

        for (int j = 0; j < allCost.size(); j++)
        {
            if (mn == allCost[j].first)
                ans[i] = allCost[j].second;
        }
    }

    cout << ansCost << endl;
    cout << ans << endl;
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