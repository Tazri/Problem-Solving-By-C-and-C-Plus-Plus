// link : https://cses.fi/problemset/task/1194/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int n, m;
vector<pair<int, int>> vm;
vector<pair<int, int>> vb;
vector<string> mp;
vector<vector<bool>> visited;
vector<vector<char>> comeFrom;
pair<int, int> person;
// 4 direction
vector<char> dch = {'D', 'U', 'R', 'L'};
vector<int> di = {1, -1, 0, 0}; // dx
vector<int> dj = {0, 0, 1, -1}; // dy

void scanMp()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mp[i][j] == '#')
                continue;
            if (mp[i][j] == 'M')
            {
                vm.push_back({i, j});
                continue;
            }

            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
            {
                vb.push_back({i, j});
            }

            if (mp[i][j] == 'A')
                person = {i, j};
        }
    }
}

vector<vector<int>> runBfs(vector<pair<int, int>> &v)
{
    visited = vector<vector<bool>>(n, vector<bool>(m, false));
    vector<vector<int>> dist(n, vector<int>(m, -1));

    queue<pair<int, int>> q;
    for (pair<int, int> p : v)
    {
        int i = p.first;
        int j = p.second;
        q.push(p);
        dist[i][j] = 0;
        visited[i][j] = true;
    }

    while (q.size() > 0)
    {
        pair<int, int> from = q.front();
        q.pop();
        int i = from.first;
        int j = from.second;

        for (int d = 0; d < 4; d++)
        {
            int toi = i + di[d];
            int toj = j + dj[d];

            if (toi >= n || toi < 0 || toj >= m || toj < 0)
                continue;
            if (mp[toi][toj] == '#')
                continue;
            if (visited[toi][toj])
                continue;

            dist[toi][toj] = dist[i][j] + 1;
            comeFrom[toi][toj] = dch[d];
            visited[toi][toj] = true;
            q.push({toi, toj});
        }
    }

    return dist;
}

void _DIBBA(int _DIBBA_NO)
{
    cin >> n >> m;
    mp = vector<string>(n);
    comeFrom = vector<vector<char>>(n, vector<char>(m, '*'));

    for (int i = 0; i < n; i++)
        cin >> mp[i];
    scanMp();

    vector<pair<int, int>> v = {person};
    vector<vector<int>> monsterDist = runBfs(vm);
    comeFrom = vector<vector<char>>(n, vector<char>(m, '*'));
    vector<vector<int>> personDist = runBfs(v);

    pair<int, int> pb = {-1, -1};

    for (pair<int, int> p : vb)
    {
        int i = p.first;
        int j = p.second;
        int mtakes = monsterDist[i][j];
        int takes = personDist[i][j];

        if (takes == -1)
            continue;

        if (takes == 0)
        {
            cout << "YES" << endl;
            cout << 0 << endl;
            return;
        }

        if (mtakes == -1 || takes < mtakes)
        {
            pb = {i, j};
            break;
        }
    }

    if (pb.first == -1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    string path;

    pair<int, int> curr = pb;

    while (curr != person)
    {
        int i = curr.first;
        int j = curr.second;
        path.push_back(comeFrom[i][j]);

        char ch = comeFrom[i][j];
        if (ch == 'R')
            j--;
        else if (ch == 'D')
            i--;
        else if (ch == 'U')
            i++;
        else if (ch == 'L')
            j++;
        curr = {i, j};
    }

    cout << path.size() << endl;
    reverse(path.begin(), path.end());
    cout << path << endl;
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