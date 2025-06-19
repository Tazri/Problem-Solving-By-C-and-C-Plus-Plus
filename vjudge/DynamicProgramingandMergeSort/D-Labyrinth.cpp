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
vector<string> mp;
pair<int, int> s, e;
vector<string> dirs;
struct Cell
{
    int i;
    int j;
};

vector<vector<bool>> visited;
bool isValid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;

    if (mp[i][j] == '#')
        return false;

    if (visited[i][j])
    {
        return false;
    }

    return true;
}

void program()
{
    cin >> n >> m;
    mp = vector<string>(n);
    dirs = vector<string>(n);
    visited = vector<vector<bool>>(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++)
        cin >> mp[i];

    for (int i = 0; i < n; i++)
    {
        dirs[i] = string(m, '#');

        for (int j = 0; j < m; j++)
        {
            if (mp[i][j] == 'A')
            {
                s = {i, j};
                dirs[i][j] = 'A';
            }
            else if (mp[i][j] == 'B')
                e = {i, j};
        }
    }

    queue<Cell> q;
    Cell start;
    start.i = s.first;
    start.j = s.second;
    visited[start.i][start.j] = true;

    q.push(start);
    Cell ans;
    ans.i = e.first;
    ans.j = e.second;

    while (q.size() > 0)
    {
        Cell front = q.front();
        q.pop();

        if (mp[front.i][front.j] == 'B')
        {
            ans = front;
            break;
        }

        Cell up = front;
        Cell down = front;
        Cell left = front;
        Cell right = front;

        up.i--;
        down.i++;
        left.j--;
        right.j++;

        if (isValid(up.i, up.j))
        {
            visited[up.i][up.j] = true;
            dirs[up.i][up.j] = 'U';
            q.push(up);
        }

        if (isValid(down.i, down.j))
        {
            visited[down.i][down.j] = true;
            dirs[down.i][down.j] = 'D';
            q.push(down);
        }

        if (isValid(left.i, left.j))
        {
            visited[left.i][left.j] = true;
            dirs[left.i][left.j] = 'L';
            q.push(left);
        }

        if (isValid(right.i, right.j))
        {
            visited[right.i][right.j] = true;
            dirs[right.i][right.j] = 'R';
            q.push(right);
        }
    }

    int si = s.first;
    int sj = s.second;
    int ei = e.first;
    int ej = e.second;

    if (dirs[ei][ej] == '#')
    {
        cout << "NO" << endl;
        return;
    }

    int ci = ei;
    int cj = ej;
    string path = "";
    while (ci != si || cj != sj)
    {
        char ch = dirs[ci][cj];
        path.push_back(ch);

        if (ch == 'U')
            ci++;
        else if (ch == 'D')
            ci--;
        else if (ch == 'L')
            cj++;
        else if (ch == 'R')
            cj--;
    }

    cout << "YES" << endl;
    cout << path.size() << endl;
    reverse(path.begin(), path.end());
    cout << path << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}