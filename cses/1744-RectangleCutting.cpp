// link : https://cses.fi/problemset/task/1744
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

vector<vector<int>> dp;

// int solve(int a, int b)
// {
//     if (a == b)
//     {
//         return 0;
//     }

//     if (a == 1 || b == 1)
//     {
//         int mx = max(a, b);
//         return mx - 1;
//     }

//     if (dp[a][b] != -1)
//     {
//         return dp[a][b];
//     }

//     int res = 1;
//     int mn = INT_MAX;
//     // vertical cut
//     for (int i = 1; i < b; i++)
//     {
//         int r1 = solve(a, i);
//         int r2 = solve(a, b - i);

//         int total = r1 + r2;

//         mn = min(mn, total);
//     }

//     for (int i = 1; i < a; i++)
//     {
//         int r1 = solve(i, b);
//         int r2 = solve(a - i, b);

//         int total = r1 + r2;
//         mn = min(total, mn);
//     }

//     res += mn;

//     dp[a][b] = res;
//     return res;
// }

void program()
{
    int a, b;
    cin >> a >> b;

    dp = vector<vector<int>>(a + 1, vector<int>(b + 1, INT_MAX));
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (i == j)
            {
                dp[i][j] = 0;
            }
            else
            {
                for (int k = 1; k < i; k++)
                {
                    int total = dp[k][j] + dp[i - k][j] + 1;
                    dp[i][j] = min(dp[i][j], total);
                }

                for (int k = 1; k < j; k++)
                {
                    int total = dp[i][k] + dp[i][j - k] + 1;
                    dp[i][j] = min(dp[i][j], total);
                }
            }
        }
    }

    cout << dp[a][b] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}