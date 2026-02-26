// link : https://codeforces.com/contest/1520/problem/C
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int n;
    cin >> n;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }

    vector<vector<int>> grid(n, vector<int>(n));

    int id = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) & 1)
                grid[i][j] = id++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j) % 2 == 0)
                grid[i][j] = id++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << grid[i][j] << " \n"[j == n - 1];
        }
    }
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