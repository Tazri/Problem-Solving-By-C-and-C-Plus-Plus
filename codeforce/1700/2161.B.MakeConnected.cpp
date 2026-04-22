// link : https://codeforces.com/problemset/problem/2161/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define DOWN 0
#define RIGHT 1
#define LEFT 2

vector<int> di = {1, 0, 0};
vector<int> dj = {0, 1, -1};

vector<vector<int>> allDir = {{RIGHT, DOWN}, {DOWN, RIGHT}, {LEFT, DOWN}, {DOWN, LEFT}};

bool haveSquare(vector<string> &g)
{
    int n = g.size();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (g[i][j] == '#' && g[i + 1][j] == '#' && g[i][j + 1] == '#' && g[i + 1][j + 1] == '#')
            {
                return true;
            }
        }
    }

    return false;
}

bool checkDir(vector<string> &g, int hash, vector<int> &dir, pair<int, int> point)
{
    int n = g.size();
    int cnt = 0;

    int i = point.first;
    int j = point.second;

    int ki = 0;
    while (i < n && j < n && i >= 0 && j >= 0)
    {
        if (g[i][j] == '#')
            cnt++;

        int d = dir[ki];

        i += di[d];
        j += dj[d];
        ki++;
        ki %= 2;
    }

    return cnt == hash;
}

bool haveThree(vector<string> &g)
{
    int n = g.size();
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i > 0 && i < n - 1)
            {
                if (g[i][j] == '#' && g[i + 1][j] == '#' && g[i - 1][j] == '#')
                    return true;
            }

            if (j > 0 && j < n - 1)
            {
                if (g[i][j] == '#' && g[i][j + 1] == '#' && g[i][j - 1] == '#')
                    return true;
            }
        }

    return false;
}

bool checkL(vector<string> &g)
{
    int n = g.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (g[i][j] == '#' && g[i + 1][j] == '#' && g[i][j + 1] == '#')
                return true;

            if (g[i][j + 1] == '#' && g[i][j] == '#' && g[i + 1][j + 1] == '#')
                return true;

            if (g[i + 1][j + 1] == '#' && g[i][j + 1] == '#' && g[i + 1][j] == '#')
                return true;

            if (g[i + 1][j] == '#' && g[i][j] == '#' && g[i + 1][j + 1] == '#')
                return true;
        }
    }

    return false;
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<string> g(n);
    for (int i = 0; i < n; i++)
        cin >> g[i];

    int cnt = 0;
    pair<int, int> p = {-1, -1};
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (g[i][j] == '#')
                cnt++;

            if (g[i][j] == '#' && p.first == -1)
            {
                p.first = i;
                p.second = j;
            }
        }

    if (cnt <= 1)
    {
        cout << "YES" << endl;
        return;
    }

    pair<int, int> p1 = p;
    for (int j = 0; j < n; j++)
    {
        if (g[p.first][j] == '#')
            p1.second = j;
    }

    if (haveThree(g))
    {
        cout << "NO" << endl;
        return;
    }

    if (cnt == 4 && haveSquare(g))
    {
        cout << "YES" << endl;
        return;
    }

    for (vector<int> &dir : allDir)
        if (checkDir(g, cnt, dir, p))
        {
            cout << "YES" << endl;
            return;
        }

    for (vector<int> &dir : allDir)
        if (checkDir(g, cnt, dir, p1))
        {
            cout << "YES" << endl;
            return;
        }

    cout << "NO" << endl;
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