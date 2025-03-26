// link : https://atcoder.jp/contests/abc302/tasks/abc302_b?lang=en
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

#define check(a1, a2, a3, a4, a5) a1 == 's' && a2 == 'n' && a3 == 'u' && a4 == 'k' && a5 == 'e'

#define p(i, j) cout << i + 1 << " " << j + 1 << endl;

void getBoard(vector<vector<char>> &board, int h, int w)
{
    board = vector<vector<char>>(h);

    for (int i = 0; i < h; i++)
    {
        board[i] = vector<char>(w);
        string s;
        cin >> s;

        for (int j = 0; j < w; j++)
        {
            board[i][j] = s[j];
        }
    }
}

bool checkBoard(vector<vector<char>> board, int i, int j)
{
    int h = board.size();
    int w = board[0].size();

    // check top left corner
    if (i - 4 >= 0 && i - 4 >= 0)
    {
        char a1 = board[i][j];
        char a2 = board[i - 1][j - 1];
        char a3 = board[i - 2][j - 2];
        char a4 = board[i - 3][j - 3];
        char a5 = board[i - 4][j - 4];

        if (check(a1, a2, a3, a4, a5))
        {
            for (int k = 0; k <= 4; k++)
            {
                p(i - k, j - k);
            }
            return true;
        }
    }

    // check top
    if (i - 4 >= 0)
    {
        char a1 = board[i][j];
        char a2 = board[i - 1][j];
        char a3 = board[i - 2][j];
        char a4 = board[i - 3][j];
        char a5 = board[i - 4][j];

        if (check(a1, a2, a3, a4, a5))
        {
            for (int k = 0; k <= 4; k++)
            {
                p(i - k, j);
            }
            return true;
        }
    }

    // check top right
    if (i - 4 >= 0 && j + 4 < w)
    {
        char a1 = board[i][j];
        char a2 = board[i - 1][j + 1];
        char a3 = board[i - 2][j + 2];
        char a4 = board[i - 3][j + 3];
        char a5 = board[i - 4][j + 4];

        if (check(a1, a2, a3, a4, a5))
        {
            for (int k = 0; k <= 4; k++)
            {
                p(i - k, j + k);
            }
            return true;
        }
    }

    // check right
    if (j + 4 < w)
    {
        char a1 = board[i][j];
        char a2 = board[i][j + 1];
        char a3 = board[i][j + 2];
        char a4 = board[i][j + 3];
        char a5 = board[i][j + 4];

        if (check(a1, a2, a3, a4, a5))
        {
            for (int k = 0; k <= 4; k++)
            {
                p(i, j + k);
            }
            return true;
        }
    }

    // check bottom right
    if (i + 4 < h && j + 4 < w)
    {
        char a1 = board[i][j];
        char a2 = board[i + 1][j + 1];
        char a3 = board[i + 2][j + 2];
        char a4 = board[i + 3][j + 3];
        char a5 = board[i + 4][j + 4];

        if (check(a1, a2, a3, a4, a5))
        {
            for (int k = 0; k <= 4; k++)
            {
                p(i + k, j + k);
            }
            return true;
        }
    }

    // check bottom
    if (i + 4 < h)
    {
        char a1 = board[i][j];
        char a2 = board[i + 1][j];
        char a3 = board[i + 2][j];
        char a4 = board[i + 3][j];
        char a5 = board[i + 4][j];

        if (check(a1, a2, a3, a4, a5))
        {
            for (int k = 0; k <= 4; k++)
            {
                p(i + k, j);
            }
            return true;
        }
    }

    // check bottom left
    if (i + 4 < h && j - 4 >= 0)
    {
        char a1 = board[i][j];
        char a2 = board[i + 1][j - 1];
        char a3 = board[i + 2][j - 2];
        char a4 = board[i + 3][j - 3];
        char a5 = board[i + 4][j - 4];

        if (check(a1, a2, a3, a4, a5))
        {
            for (int k = 0; k <= 4; k++)
            {
                p(i + k, j - k);
            }
            return true;
        }
    }

    // check left
    if (j - 4 >= 0)
    {
        char a1 = board[i][j];
        char a2 = board[i][j - 1];
        char a3 = board[i][j - 2];
        char a4 = board[i][j - 3];
        char a5 = board[i][j - 4];

        if (check(a1, a2, a3, a4, a5))
        {
            for (int k = 0; k <= 4; k++)
            {
                p(i, j - k);
            }
            return true;
        }
    }
    return false;
}

void program()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> board;
    getBoard(board, h, w);

    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (board[i][j] == 's')
            {
                if (checkBoard(board, i, j))
                {
                    return;
                }
            }
        }
    }
}

int main()
{
    optimize();
    program();
    return 0;
}