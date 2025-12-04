// link : https://lightoj.com/problem/back-to-underworld
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

int sz = 20000 + 123;

void program(int caseno)
{
    cout << "Case " << caseno << ": ";
    int n;
    cin >> n;
    set<int> st;

    vector<pair<int, int>> fights(n);

    for (int i = 0; i < n; i++)
    {
        cin >> fights[i].first >> fights[i].second;
        st.insert(fights[i].first);
        st.insert(fights[i].second);
    }

    map<int, int> mp;
    int index = 1;
    for (int si : st)
        mp[si] = index++;

    for (int i = 0; i < n; i++)
    {
        fights[i].first = mp[fights[i].first];
        fights[i].second = mp[fights[i].second];
    }

    int gn = st.size();
    vector<vector<int>> graph(gn + 1);
    vector<bool> visited(gn + 1, false);
    vector<int> color(gn + 1, 0);

    for (pair<int, int> nd : fights)
    {
        int from = nd.first;
        int to = nd.second;

        graph[from].push_back(to);
        graph[to].push_back(from);
    }

    int ans = 0;
    for (int i = 1; i <= gn; i++)
    {
        if (visited[i])
            continue;
        color[i] = 1;
        visited[i] = true;
        queue<int> q;
        q.push(i);
        vector<int> nds;
        while (q.size())
        {
            int from = q.front();
            q.pop();
            nds.push_back(from);

            for (int to : graph[from])
            {
                if (visited[to])
                    continue;
                visited[to] = true;
                color[to] = color[from] == 1 ? 2 : 1;
                q.push(to);
            }
        }

        int one = 0;
        int two = 0;

        for (int nd : nds)
        {
            if (color[nd] == 1)
                one++;
            else if (color[nd] == 2)
                two++;
        }

        int mx = max(one, two);
        ans += mx;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}