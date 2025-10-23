// link : https://cses.fi/problemset/task/1638/
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

const int mod = 1e9 + 7;

void program()
{
    int n;
    cin >> n;
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    vector<string> grid(n);

    for (int i = 0; i < n; i++)
        cin >> grid[i];

    if (grid[n - 1][n - 1] == '*')
    {
        cout << 0 << endl;
        return;
    }

    dp[n - 1][n - 1] = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = n - 1; j >= 0; j--)
        {

            if (grid[i][j] == '*')
            {
                dp[i][j] = 0;
                continue;
            }

            int sum = dp[i + 1][j] + dp[i][j + 1];
            sum %= mod;
            dp[i][j] += sum;
            dp[i][j] %= mod;
        }
    }

    cout << dp[0][0] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}