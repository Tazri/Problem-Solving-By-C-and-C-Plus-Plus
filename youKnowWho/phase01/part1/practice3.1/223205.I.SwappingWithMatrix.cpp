// link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
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

int n, x, y;

void swapRow(vector<vector<int>> &matrix)
{
    for (int j = 1; j <= n; j++)
        swap(matrix[x][j], matrix[y][j]);
}

void swapCol(vector<vector<int>> &matrix)
{
    for (int i = 1; i <= n; i++)
        swap(matrix[i][x], matrix[i][y]);
}

void program()
{
    cin >> n >> x >> y;
    vector<vector<int>> matrix(n + 1, vector<int>(n + 1));

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> matrix[i][j];

    swapRow(matrix);
    swapCol(matrix);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cout << matrix[i][j] << " \n"[j == n];
}

int32_t main()
{
    optimize();
    program();
    return 0;
}