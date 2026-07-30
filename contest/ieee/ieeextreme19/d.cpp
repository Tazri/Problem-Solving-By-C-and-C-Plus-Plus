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
    int m;
    cin >> m;
    vector<vector<int>> dp(m + 1, vector<int>(m + 1, 0));

    for (int i = 0; i <= m; i++)
    {
        dp[0][i] = 1;
    }

    for (int n = 1; n <= m; n++)
    {
        for (int p = 1; p <= n; p++)
        {
            dp[n][p] = dp[n][p - 1] + (n - p >= 0 ? dp[n - p][p] : 0);
        }
    }

    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= m; j++)
            cout << dp[i][j] << " ";

        cout << endl;
    }

    for (int i = 1; i <= m; i++)
        cout << dp[i][i] << " \n"[i == m];
}

int main()
{
    optimize();
    program();
    return 0;
}