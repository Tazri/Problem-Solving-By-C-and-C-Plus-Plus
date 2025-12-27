// link : https://codeforces.com/problemset/problem/1335/D
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

void program()
{
    int n = 9;
    vector<string> board(n);
    for (int i = 0; i < n; i++)
        cin >> board[i];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (board[i][j] == '1')
                board[i][j] = '2';

    for (string line : board)
        cout << line << endl;
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