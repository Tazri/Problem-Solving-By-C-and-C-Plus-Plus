// link : https://codeforces.com/problemset/problem/2090/B
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
    int n, m;
    cin >> n >> m;
    vector<vector<int>> board(n, vector<int>(m, 0));
    vector<vector<bool>> mp(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < m; j++)
        {
            board[i][j] = (int)s[j] - (int)'0';
        }
    }

    for (int j = 0; j < m; j++)
    {
        if (board[0][j] == 0)
            continue;

        for (int i = 0; i < n; i++)
        {
            if (board[i][j] == 0)
                break;
            mp[i][j] = true;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (board[i][0] == 0)
            continue;

        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 0)
                break;
            mp[i][j] = true;
        }
    }

    // now check
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (board[i][j] == 0)
                continue;

            if (mp[i][j])
                continue;
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
