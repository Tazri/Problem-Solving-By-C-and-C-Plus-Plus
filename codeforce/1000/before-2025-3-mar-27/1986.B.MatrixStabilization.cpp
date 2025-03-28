// link : https://codeforces.com/problemset/problem/1986/B
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

int n, m;
vector<vector<int>> matrix;

vector<vector<int>> takeMatrix()
{
    cin >> n >> m;
    matrix = vector<vector<int>>(n);
    for (int i = 0; i < n; i++)
    {
        matrix[i] = vector<int>(m);

        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];
    }

    return matrix;
}

void printMatrix()
{
    for (int i = 0; i < n; i++)
    {
        cout << matrix[i][0];
        for (int j = 1; j < m; j++)
            cout << " " << matrix[i][j];
        cout << endl;
    }
}

void program()
{
    takeMatrix();

    // traverse matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            // take all neighbour
            int t = -1, b = -1, l = -1, r = -1;

            if (i > 0)
                t = matrix[i - 1][j];
            if (i < n - 1)
                b = matrix[i + 1][j];
            if (j > 0)
                l = matrix[i][j - 1];
            if (j < m - 1)
                r = matrix[i][j + 1];

            int mx = max(t, max(b, max(l, r)));

            if (matrix[i][j] > mx)
            {
                matrix[i][j] = mx;
            }
        }
    }

    printMatrix();
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