// link : https://atcoder.jp/contests/abc295/tasks/abc295_b?lang=en
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

class Bomb
{
public:
    int i, j, dist;
    Bomb(int i, int j, int dist)
    {
        this->i = i;
        this->j = j;
        this->dist = dist;
    }
    Bomb() {}
};

vector<vector<char>>
    board;
vector<Bomb> bombs;

int r, c;

void printBoard()
{
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
            cout << board[i][j];
        cout << endl;
    }
}

void takeBoard()
{
    cin >> r >> c;
    board = vector<vector<char>>(r);
    for (int i = 0; i < r; i++)
    {
        string s;
        cin >> s;
        board[i] = vector<char>(c);

        for (int j = 0; j < s.size(); j++)
            board[i][j] = s[j];
    }
}

void blust(Bomb bomb)
{
    int dyLimit = bomb.dist;
    for (int k = 0; k <= bomb.dist; k++)
    {
        int lj = bomb.j - k;
        int rj = bomb.j + k;

        for (int dy = 0; dy <= dyLimit; dy++)
        {
            int ti = bomb.i - dy;
            int bi = bomb.i + dy;

            if (lj >= 0)
            {
                if (ti >= 0)
                    board[ti][lj] = '.';
                if (bi < r)
                    board[bi][lj] = '.';
            }

            if (rj < c)
            {
                if (ti >= 0)
                    board[ti][rj] = '.';
                if (bi < r)
                    board[bi][rj] = '.';
            }
        }
        dyLimit--;
    }
}

void program()
{
    takeBoard();

    // traverse collect bombs
    for (int i = 0; i < board.size(); i++)
    {
        for (int j = 0; j < board[i].size(); j++)
        {
            if (board[i][j] == '.' || board[i][j] == '#')
                continue;
            int dist = (int)board[i][j] - (int)'1' + 1;
            bombs.push_back(Bomb(i, j, dist));
        }
    }

    // blust all bombs
    for (int i = 0; i < bombs.size(); i++)
    {
        blust(bombs[i]);
    }

    printBoard();
}

int main()
{
    optimize();
    program();
    return 0;
}