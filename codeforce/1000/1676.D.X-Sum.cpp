// link : https://codeforces.com/problemset/problem/1676/D
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

void takeMatrix(vector<vector<int>> &matrix, int n, int m)
{
    matrix = vector<vector<int>>(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
}

void programmer()
{
    vector<vector<int>> matrix;
    int n, m;
    cin >> n >> m;
    takeMatrix(matrix, n, m);
    int d = n + m - 1;
    vector<int> right(d, 0);
    vector<int> left(d, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int di = i + j;
            left[di] += matrix[i][j];
            int rj = m - j - 1;
            di = rj + i;
            right[di] += matrix[i][j];
        }
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int attack = 0;
            int di = i + j;
            attack += left[di];
            int rj = m - j - 1;
            di = rj + i;
            attack += right[di];
            attack -= matrix[i][j];
            ans = max(ans, attack);
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        programmer();
    return 0;
}