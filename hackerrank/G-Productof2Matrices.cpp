// link : https://www.hackerrank.com/contests/smart-interviews/challenges/si-product-of-2-matrices
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
    for (int i = 0; i < n; i++)
    {
        matrix[i] = vector<int>(m);

        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
}

void program()
{
    int n1, m1, n2, m2;

    cin >> n1 >> m1;
    vector<vector<int>> matrix1(n1);
    takeMatrix(matrix1, n1, m1);

    cin >> n2 >> m2;
    vector<vector<int>> matrix2(n2);
    takeMatrix(matrix2, n2, m2);

    // result
    int n = n1;
    int m = m2;
    int k = m1;
    vector<vector<int>> result(n);

    for (int i = 0; i < n; i++)
    {
        result[i] = vector<int>(m, 0);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            for (int c = 0, r = 0; c < k; c++, r++)
            {
                result[i][j] += matrix1[i][r] * matrix2[c][j];
            }
        }
    }

    // print
    for (int i = 0; i < n; i++)
    {
        cout << result[i][0];

        for (int j = 1; j < m; j++)
        {
            cout << " " << result[i][j];
        }
        cout << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}