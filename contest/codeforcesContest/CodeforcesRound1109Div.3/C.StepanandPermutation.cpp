#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n, x, y;
    cin >> n >> x >> y;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<bool> visited(n + 1, false);

    vector<int> ans(n + 1);
    vector<int> dir = {x, y};
    for (int i = 1; i <= n; i++)
    {
        if (visited[i])
            continue;

        vector<int> index;
        vector<int> values;

        queue<int> q;
        index.push_back(i);
        values.push_back(v[i]);
        visited[i] = true;

        q.push(i);

        while (q.size() > 0)
        {
            int from = q.front();
            q.pop();
            visited[from] = true;
            vector<int> vto;

            for (int di : dir)
            {
                int t1 = from + di;
                int t2 = from - di;
                if (t1 <= n)
                    vto.push_back(t1);
                if (t2 >= 1)
                    vto.push_back(t2);
            }

            for (int to : vto)
            {
                if (visited[to])
                    continue;
                index.push_back(to);
                values.push_back(v[to]);
                visited[to] = true;
                q.push(to);
            }
        }

        sort(index.begin(), index.end());
        sort(values.begin(), values.end());
        for (int i = 0; i < index.size(); i++)
        {
            ans[index[i]] = values[i];
        }
    }

    for (int i = 1; i <= n; i++)
        if (ans[i] != i)
        {
            cout << "NO" << endl;
            return;
        }

    cout << "YES" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}