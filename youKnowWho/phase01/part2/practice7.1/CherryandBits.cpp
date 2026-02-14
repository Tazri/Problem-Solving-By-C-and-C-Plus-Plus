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
    vector<vector<int>> flip(n + 2, vector<int>(m + 2, 0));
    vector<string> matrix(n);

    for (int i = 0; i < n; i++)
        cin >> matrix[i];

    int q;
    cin >> q;

    for (int i = 1; i <= q; i++)
    {
        int i1, j1, i2, j2;
        cin >> i1 >> j1 >> i2 >> j2;

        flip[i1][j1] += 1;
        flip[i1][j2 + 1] -= 1;
        flip[i2 + 1][j1] -= 1;
        flip[i2 + 1][j2 + 1] += 1;
    }

    // for (int i = 0; i <= n; i++)
    //     for (int j = 0; j <= m; j++)
    //         cout << flip[i][j] << " \n"[j == m];

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            flip[i][j] += flip[i - 1][j] + flip[i][j - 1] - flip[i - 1][j - 1];
        }
    }

    // cout << "flip : " << endl;
    // for (int i = 0; i <= n; i++)
    // {
    //     for (int j = 0; j <= m; j++)
    //         cout << flip[i][j] << " \n"[j == m];
    // }

    vector<vector<int>> ans(n + 1, vector<int>(m + 1, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == '1')
                ans[i + 1][j + 1] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int f = flip[i][j];

            if (f & 1)
                ans[i][j] = ans[i][j] == 0 ? 1 : 0;
        }
    }

    // cout << "ans : " << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
            cout << ans[i][j];
        cout << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}