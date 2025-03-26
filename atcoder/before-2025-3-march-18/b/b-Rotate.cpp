// link : https://atcoder.jp/contests/abc309/tasks/abc309_b?lang=en
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

int main()
{
    optimize();
    int n;
    cin >> n;

    vector<vector<int>> matrix(n);

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        matrix[i] = vector<int>(n);
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '0')
            {
                matrix[i][j] = 0;
            }
            else
            {
                matrix[i][j] = 1;
            }
        }
    }

    // rotate outer later onece

    // top
    int prev = matrix[0][0];
    matrix[0][0] = matrix[1][0];

    for (int i = 1; i < n; i++)
    {
        int temp = matrix[0][i];
        matrix[0][i] = prev;
        prev = temp;
    }

    // right
    for (int i = 1; i < n; i++)
    {
        int temp = matrix[i][n - 1];
        matrix[i][n - 1] = prev;
        prev = temp;
    }

    // bottom
    for (int i = n - 2; i >= 0; i--)
    {
        int temp = matrix[n - 1][i];
        matrix[n - 1][i] = prev;
        prev = temp;
    }

    // right
    for (int i = n - 2; i >= 0; i--)
    {
        int temp = matrix[i][0];
        matrix[i][0] = prev;
        prev = temp;
    }

    // print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j];
        cout << endl;
    }
    return 0;
}