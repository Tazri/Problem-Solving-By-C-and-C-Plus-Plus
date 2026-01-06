// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X
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
int mxSum(vector<vector<int>> &matrix, int i = 0, int j = 0, int sum = 0)
{
    if (i >= n || j >= m)
        return INT_MIN;

    if (i == n - 1 && j == m - 1)
        return sum + matrix[i][j];

    return max(mxSum(matrix, i + 1, j, sum + matrix[i][j]), mxSum(matrix, i, j + 1, sum + matrix[i][j]));
}

void program()
{
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> matrix[i][j];

    cout << mxSum(matrix) << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}