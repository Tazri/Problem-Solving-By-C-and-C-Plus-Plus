// link : https://www.hackerrank.com/contests/smart-interviews-basic/challenges/si-basic-transpose-matrix
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
    int matrix[n][m];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < m; i++)
    {
        cout << matrix[0][i];
        for (int j = 1; j < n; j++)
        {
            cout << " " << matrix[j][i];
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