// link : https://vjudge.net/problem/cses-1652
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
    int n, k;
    cin >> n >> k;

    vector<vector<int>> pre(n + 2, vector<int>(n + 2, 0));
    vector<string> grid(n);

    for (int i = 0; i < n; i++)
        cin >> grid[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (grid[i][j] == '*')
                pre[i + 1][j + 1] = 1;
        }
    }

    // for (int i = 1; i <= n; i++)
    //     for (int j = 1; j <= n; j++)
    //         cout << pre[i][j] << " \n"[j == n];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            pre[i][j] += pre[i - 1][j - 1] + (pre[i - 1][j] - pre[i - 1][j - 1]) + (pre[i][j - 1] - pre[i - 1][j - 1]);
        }
    }

    // cout << "pre : " << endl;
    // for (int i = 1; i <= n; i++)
    //     for (int j = 1; j <= n; j++)
    //         cout << pre[i][j] << " \n"[j == n];

    for (int i = 0; i < k; i++)
    {
        int i1, j1, i2, j2;
        cin >> i1 >> j1 >> i2 >> j2;

        int sum = pre[i2][j2];
        sum -= pre[i1 - 1][j2];
        sum -= pre[i2][j1 - 1];
        sum += pre[i1 - 1][j1 - 1];
        cout << sum << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}