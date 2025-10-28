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

class Solution
{
public:
    string tictactoe(vector<vector<int>> &moves)
    {
        vector<char> v(9, '.');

        vector<vector<int>> board(3, vector<int>(3));

        int n = 0;
        for (int i = 0; i < board.size(); i++)
            for (int j = 0; j < board[i].size(); j++)
                board[i][j] = n++;

        bool isXturn = true;
        for (vector<int> m : moves)
        {
            int i = m[0];
            int j = m[1];
            int key = board[i][j];

            if (isXturn)
                v[key] = 'X';
            else
                v[key] = 'O';

            isXturn = !isXturn;
        }

        vector<vector<int>> patterns = {
            {0, 1, 2},
            {3, 4, 5},
            {6, 7, 8},
            {0, 3, 6},
            {1, 4, 7},
            {2, 5, 8},
            {6, 4, 2},
            {0, 4, 8}};

        char winner = ' ';
        for (vector<int> p : patterns)
        {
            int a = p[0];
            int b = p[1];
            int c = p[2];

            if (v[a] == v[b] && v[b] == v[c] && v[b] != '.')
            {
                winner = v[a];
                break;
            }
        }

        if (winner == 'X')
            return "A";
        else if (winner == 'O')
            return "B";
        else if (moves.size() == 9)
            return "Draw";
        else
            return "Pending";
    }
};

int main()
{
    optimize();
    vector<vector<int>> moves = {{2, 2}, {1, 2}, {2, 1}, {1, 1}, {2, 0}};

    Solution s;
    cout << s.tictactoe(moves) << endl;
    return 0;
}