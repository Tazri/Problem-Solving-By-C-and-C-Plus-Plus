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

void printBoard(vector<vector<char>> &board)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
            cout << board[i][j];
        cout << endl;
    }
}

void pr(pair<int, int> p)
{
    cout << "{" << p.first << "," << p.second << "} ";
}

void printPair(pair<int, int> p1, pair<int, int> p2)
{
    pr(p1);
    cout << " -> ";
    pr(p2);
    cout << endl;
}

void printAns(vector<vector<char>> board, int n, int m)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << board[i][j];
        cout << endl;
    }
}

char findMin(vector<int> &digits)
{
    vector<int> dmp(10);

    for (int i = 0; i < 10; i++)
    {
        for (int di : digits)
        {
            int diff = abs(di - i);
            dmp[i] += diff;
        }
    }

    int mn = dmp[0];
    for (int i = 0; i < 10; i++)
        mn = min(mn, dmp[i]);

    int ci = 0;
    for (int i = 0; i < 10; i++)
    {
        if (dmp[i] == mn)
        {
            ci = i;
            break;
        }
    }
    return (char)((int)'0' + ci);
}

void program()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> board(n + 2, vector<char>(m + 2, '.'));
    map<pair<int, int>, int> mp;

    vector<vector<pair<int, int>>> v;
    int id = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> board[i][j];
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (board[i][j] == '.')
                continue;

            // row check
            if (board[i - 1][j] == '.')
            {
                int t = 0;
                while (i + t + 1 <= n + 1 && board[i + t + 1][j] != '.')
                    t++;

                int l = i;
                int r = i + t;

                while (l < r)
                {
                    pair<int, int> p1 = {l, j};
                    pair<int, int> p2 = {r, j};

                    int cid;
                    if (mp.count(p1) || mp.count(p2))
                    {
                        cid = mp.count(p1) ? mp[p1] : mp[p2];
                    }
                    else
                    {
                        cid = id++;
                        v.push_back(vector<pair<int, int>>());
                    }

                    if (!mp.count(p1))
                        v[cid].push_back(p1);
                    if (!mp.count(p2))
                        v[cid].push_back(p2);

                    mp[p1] = cid;
                    mp[p2] = cid;
                    l++;
                    r--;
                }
            }

            // col check
            if (board[i][j - 1] == '.')
            {
                int t = 0;
                while (j + t + 1 <= m + 1 && board[i][j + t + 1] != '.')
                    t++;

                int l = j;
                int r = j + t;

                while (l < r)
                {
                    pair<int, int> p1 = {i, l};
                    pair<int, int> p2 = {i, r};

                    int cid;
                    if (mp.count(p1) || mp.count(p2))
                    {
                        cid = mp.count(p1) ? mp[p1] : mp[p2];
                    }
                    else
                    {
                        cid = id++;
                        v.push_back(vector<pair<int, int>>());
                    }

                    if (!mp.count(p1))
                        v[cid].push_back(p1);

                    if (!mp.count(p2))
                        v[cid].push_back(p2);

                    mp[p1] = cid;
                    mp[p2] = cid;
                    l++;
                    r--;
                }
            }
        }
    }

    set<pair<int, int>> block;
    for (int i = 0; i < id; i++)
    {
        vector<int> digits;
        for (pair<int, int> p : v[i])
        {
            char chd = board[p.first][p.second];
            digits.push_back((int)chd - (int)'0');
        }

        char ch = findMin(digits);

        for (pair<int, int> p : v[i])
        {
            board[p.first][p.second] = ch;
        }
    }
    printAns(board, n, m);
}

int main()
{
    optimize();
    program();
    return 0;
}