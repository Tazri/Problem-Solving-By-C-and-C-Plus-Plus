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

vector<int> di = {-1, -1, -1, 0, 0, 1, 1, 1};
vector<int> dj = {-1, 0, 1, -1, 1, -1, 0, 1};

void program(int n, int m, int caseno)
{
    cout << "Case " << caseno << ": ";
    vector<string> graph(n);

    for (int i = 0; i < n; i++)
        cin >> graph[i];

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (graph[i][j] == 'A')
                v.push_back({i, j});

    int ans = 0;
    for (pair<int, int> s : v)
    {
        vector<vector<bool>> visited(n, vector<bool>(m, false));

        queue<pair<int, int>> q;
        q.push(s);
        visited[s.first][s.second] = true;
        char mx = graph[s.first][s.second];
        while (q.size())
        {
            pair<int, int> frm = q.front();
            q.pop();
            int i = frm.first;
            int j = frm.second;
            char prev = graph[i][j];

            for (int d = 0; d < 8; d++)
            {
                int ti = i + di[d];
                int tj = j + dj[d];

                if (ti >= n || ti < 0 || tj >= m || tj < 0)
                    continue;
                if (visited[ti][tj])
                    continue;
                char curr = graph[ti][tj];

                if (prev + 1 != curr)
                    continue;

                visited[ti][tj] = true;
                q.push({ti, tj});
                mx = max(mx, curr);
            }
        }
        int a1 = mx - 'A' + 1;
        ans = max(a1, ans);
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int n, m;
    int caseno = 1;
    while (1)
    {
        cin >> n >> m;

        if (n == 0 && m == 0)
            break;
        program(n, m, caseno++);
    }
    return 0;
}