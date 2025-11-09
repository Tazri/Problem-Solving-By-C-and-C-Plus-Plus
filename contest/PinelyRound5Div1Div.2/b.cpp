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

bool check(vector<string> &g)
{
    int n = g.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 2; j < n; j++)
        {
            if (g[i][j - 1] == '#' && g[i][j - 2] == '#' && g[i][j] == '#')
                return false;
        }
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 2; i < n; i++)
        {
            if (g[i - 1][j] == '#' && g[i - 2][j] == '#' && g[i][j] == '#')
                return false;
        }
    }

    return true;
}

bool checkAllConnected(vector<string> g)
{
    queue<pair<int, int>> q;
    int n = g.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (g[i][j] == '#')
            {
                q.push({i, j});
                break;
            }
        }

        if (q.size())
            break;
    }

    if (q.empty())
        return true;

    while (q.size())
    {
        auto p = q.front();

        q.pop();

        int i = p.first;
        int j = p.second;
        g[i][j] = '.';

        if (i + 1 < n && g[i + 1][j] == '#')
        {
            g[i + 1][j] = '.';
            q.push({i + 1, j});
        }
        if (j + 1 < n && g[i][j + 1] == '#')
        {
            g[i][j + 1] = '.';
            q.push({i, j + 1});
        }

        if (j - 1 >= 0 && g[i][j - 1] == '#')
        {
            g[i][j - 1] = '.';
            q.push({i, j - 1});
        }

        if (i - 1 >= 0 && g[i - 1][j] == '#')
        {
            g[i - 1][j] = '.';
            q.push({i - 1, j});
        }
    }

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (g[i][j] == '#')
                return false;
    return true;
}

void program()
{
    int n;
    cin >> n;
    vector<string> g(n);
    int black = 0;
    int ti = -1;
    int tj = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> g[i];

        for (int j = 0; j < n; j++)
        {
            if (g[i][j] == '#')
            {
                black++;
                if (ti == -1)
                {
                    ti = i;
                    tj = j;
                }
            }
        }
    }

    if (check(g) == false)
    {
        cout << "NO" << endl;
        return;
    }

    if (checkAllConnected(g))
    {
        cout << "YES" << endl;
        return;
    }

    int r = black;
    int l = 0;
    int b = 0;
    int k = 0;
    int p = 0;
    for (int i = ti, j = tj; i < n && j < n && i >= 0 && j >= 0; i++, j++)
        if (g[i][j] == '#')
            r--;

    for (int i = ti + 1, j = tj; i < n && j < n && i >= 0 && j >= 0; i++, j++)
        if (g[i][j] == '#')
            b++;

    for (int i = ti + 1, j = tj - 1; i < n && j < n && i >= 0 && j >= 0; i++, j++)
        if (g[i][j] == '#')
            p++;

    for (int i = ti, j = tj + 1; i < n && j < n && i >= 0 && j >= 0; i++, j++)
        if (g[i][j] == '#')
            l++;

    for (int i = ti, j = tj - 1; i < n && j < n && i >= 0 && j >= 0; i++, j++)
        if (g[i][j] == '#')
            l++;

    if ((r - l) == 0 || (r - k) == 0 || (r - b) == 0 || (r - p) == 0)
    {
        cout << "YES" << endl;
        return;
    }

    r = black;
    l = 0;
    b = 0;
    k = 0;
    for (int i = ti, j = tj; i < n && j < n && i >= 0 && j >= 0; i++, j--)
        if (g[i][j] == '#')
            r--;

    for (int i = ti + 1, j = tj; i < n && j < n && i >= 0 && j >= 0; i++, j--)
        if (g[i][j] == '#')
            b++;

    for (int i = ti, j = tj + 1; i < n && j < n && i >= 0 && j >= 0; i++, j--)
        if (g[i][j] == '#')
            l++;

    for (int i = ti, j = tj - 1; i < n && j < n && i >= 0 && j >= 0; i++, j--)
        if (g[i][j] == '#')
            k++;

    if ((r - k) == 0 || (r - b) == 0 || (r - l) == 0)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

void p2(int i)
{
    int n;
    cin >> n;
    vector<string> g(n);

    for (int i = 0; i < n; i++)
        cin >> g[i];
    if (i == 86)
    {
        cout << n << endl;
        for (int i = 0; i < n; i++)
            cout << g[i] << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}