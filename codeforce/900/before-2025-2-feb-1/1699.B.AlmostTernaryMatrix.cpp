// link :https://codeforces.com/problemset/problem/1699/B
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

void test()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n + 1);

    for (int i = 0; i <= n; i++)
    {
        matrix[i] = vector<int>(m + 1, 0);
    }

    int color = 1;

    for (int i = 1; i <= n; i += 2)
    {
        matrix[i][1] = color;
        matrix[i + 1][1] = !color;
        color = !color;
    }

    for (int i = 1; i <= n; i++)
    {
        color = matrix[i][1];

        for (int j = 1; j <= m; j += 2)
        {
            matrix[i][j] = color;
            matrix[i][j + 1] = !color;
            color = !color;
        }
    }

    // print the matrix
    for (int i = 1; i <= n; i++)
    {
        cout << matrix[i][1];
        for (int j = 2; j <= m; j++)
        {
            cout << " " << matrix[i][j];
        }
        cout << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}