// link : https://codeforces.com/problemset/problem/1846/B
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

vector<vector<int>> indexes = {
    {0, 1, 2},
    {3, 4, 5},
    {6, 7, 8},
    {0, 3, 6},
    {1, 4, 7},
    {2, 5, 8},
    {0, 4, 8},
    {2, 4, 6}};

void takeBoard(vector<char> &b)
{
    int bi = 0;
    for (int i = 0; i < 3; i++)
    {
        string l;
        cin >> l;

        for (char ch : l)
        {
            b[bi++] = ch;
        }
    }
}

void program()
{
    vector<char> board(9);

    takeBoard(board);

    for (vector<int> indx : indexes)
    {
        bool isWin = true;
        char ch = board[indx[0]];
        if (ch == '.')
            continue;
        for (int i : indx)
        {
            if (board[i] != ch)
            {
                isWin = false;
                break;
            }
        }

        if (isWin)
        {
            cout << ch << endl;
            return;
        }
    }

    cout << "DRAW" << endl;
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