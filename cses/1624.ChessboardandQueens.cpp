// link : https://cses.fi/problemset/task/1624
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

int n = 8;
vector<string> board(8);
vector<vector<int>> mp(8, vector<int>(8, 0));

bool isValid(int i, int j)
{
    if (i < 0 || i >= 8 || j < 0 || j >= 8)
        return false;

    return true;
}

void cnt(int i, int j, int v)
{
    for (int k = j; k < n; k++)
    {
        if (isValid(i, k) == false)
            break;
        mp[i][k] += v;
    }

    for (int k = j - 1; k >= 0; k--)
        if (isValid(i, k))
            mp[i][k] += v;
        else
            break;

    for (int k = i + 1; k < n; k++)
        if (isValid(k, j))
            mp[k][j] += v;
        else
            break;

    for (int k = i - 1; k >= 0; k--)
        if (isValid(k, j))
            mp[k][j] += v;
        else
            break;

    int ki = i + 1;
    int kj = j + 1;
    while (isValid(ki, kj))
        mp[ki++][kj++] += v;

    ki = i - 1;
    kj = j - 1;
    while (isValid(ki, kj))
        mp[ki--][kj--] += v;

    ki = i - 1;
    kj = j + 1;
    while (isValid(ki, kj))
        mp[ki--][kj++] += v;

    ki = i + 1;
    kj = j - 1;
    while (isValid(ki, kj))
        mp[ki++][kj--] += v;
}

int canTake(int i, int j)
{
    if (isValid(i, j) == false)
        return false;

    if (board[i][j] == '*')
        return false;

    if (mp[i][j] > 0)
        return false;
    return true;
}

int ans = 0;

void solve(int i)
{
    if (i == 8)
    {
        ans++;
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (canTake(i, j))
        {
            // take it
            cnt(i, j, 1);
            solve(i + 1);
            cnt(i, j, -1);
        }
    }
}

void program()
{
    for (int i = 0; i < 8; i++)
        cin >> board[i];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //         cout << mp[i][j] << " ";
    //     cout << endl;
    // }

    solve(0);
    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}