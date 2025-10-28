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

typedef vector<pair<int, int>> wordType;
typedef vector<vector<char>> boardType;
typedef vector<pair<int, int>> group;

void printBoard(boardType &board, int n, int m)
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}

void printAns(boardType &board, int n, int m)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << board[i][j];
        }
        cout << endl;
    }
}

void printWord(boardType &board, wordType word)
{
    for (pair<int, int> p : word)
    {
        cout << board[p.first][p.second];
    }
    cout << endl;
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

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cin >> board[i][j];
    }

    vector<pair<int, int>> topdown;
    vector<pair<int, int>> leftright;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (board[i][j] == '.')
                continue;

            if (board[i - 1][j] == '.')
                topdown.push_back({i, j});

            if (board[i][j - 1] == '.')
                leftright.push_back({i, j});
        }
    }

    vector<wordType> words;

    for (pair<int, int> p : topdown)
    {
        wordType w;
        int i = p.first;
        int j = p.second;
        int t = 0;
        while (board[i + t][j] != '.')
        {
            w.push_back({i + t, j});
            t++;
        }

        words.push_back(w);
    }

    for (pair<int, int> p : leftright)
    {
        wordType w;
        int i = p.first;
        int j = p.second;
        int t = 0;
        while (board[i][j + t] != '.')
        {
            w.push_back({i, j + t});
            t++;
        }

        words.push_back(w);
    }

    // printBoard(board, n, m);
    vector<group> groups(n * m + 123, group(0));
    map<pair<int, int>, int> mp;
    int id = 0;

    for (wordType word : words)
    {
        int l = 0;
        int r = word.size() - 1;

        while (l < r)
        {
            pair<int, int> p1 = word[l];
            pair<int, int> p2 = word[r];

            int cid;
            if (mp.count(p1) && mp.count(p2))
            {
                cid = mp[p1];
                if (cid != mp[p2])
                {
                    int old_cid = mp[p2];
                    for (auto &cell : groups[old_cid])
                    {
                        groups[cid].push_back(cell);
                        mp[cell] = cid;
                    }
                    groups[old_cid].clear();
                }
            }
            else if (mp.count(p1))
            {
                cid = mp[p1];
            }
            else if (mp.count(p2))
            {
                cid = mp[p2];
            }
            else
            {
                cid = id++;
            }

            if (!mp.count(p1))
                groups[cid].push_back(p1);
            if (!mp.count(p2))
                groups[cid].push_back(p2);

            mp[p1] = cid;
            mp[p2] = cid;

            l++;
            r--;
        }
    }

    for (int i = 0; i < groups.size(); i++)
    {
        if (groups[i].empty())
            continue;

        vector<int> digits;
        for (pair<int, int> p : groups[i])
        {
            char chd = board[p.first][p.second];
            digits.push_back((int)chd - (int)'0');
        }

        char ch = findMin(digits);

        for (pair<int, int> p : groups[i])
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