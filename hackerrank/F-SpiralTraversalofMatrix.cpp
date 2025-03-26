// link : https://www.hackerrank.com/contests/smart-interviews/challenges/si-spiral-traversal-of-matrix
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

void print(vector<vector<int>> matrix, int i, int j)
{
    if (i == 0 && j == 0)
    {
        cout << matrix[i][j];
    }
    else
    {
        cout << " " << matrix[i][j];
    }
}

void program()
{
    int n;
    cin >> n;

    vector<vector<int>> matrix(n);

    for (int i = 0; i < n; i++)
    {
        vector<int> row(n);

        for (int i = 0; i < n; i++)
        {
            cin >> row[i];
        }
        matrix[i] = row;
    }

    int midI = ((n + 1) / 2) - 1;
    int lj = n - 1;
    int li = n - 1;

    for (int i = 0, j = 0; i <= midI; i++, j++)
    {
        // top
        for (int c = j; c <= lj; c++)
        {
            print(matrix, i, c);
        }

        // right
        for (int r = i + 1; r <= li; r++)
        {
            print(matrix, r, lj);
        }

        // bottom
        for (int c = lj - 1; c >= j; c--)
        {
            print(matrix, li, c);
        }

        // left
        for (int r = li - 1; r > i; r--)
        {
            print(matrix, r, j);
        }
        li--;
        lj--;
    }
    cout << endl;
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