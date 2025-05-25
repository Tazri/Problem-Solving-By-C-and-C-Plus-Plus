// link : https://www.hackerrank.com/challenges/2d-array/problem
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
    int n = 6;
    vector<vector<int>> matrix(n, vector<int>(n));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    int mx = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n - 2; j++)
        {
            int sum = 0;

            for (int t = 0; t < 3; t++)
            {
                sum += matrix[i][j + t];
                sum += matrix[i + 2][j + t];
            }

            sum += matrix[i + 1][j + 1];

            if (i == 0 && j == 0)
                mx = sum;
            else
                mx = max(mx, sum);
        }
    }

    cout << mx << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}