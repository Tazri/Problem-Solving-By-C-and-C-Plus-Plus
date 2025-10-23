// link : https://cses.fi/problemset/task/1636
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

vector<int> c;

void program()
{
    int n, x;
    cin >> n >> x;
    c = vector<int>(n);

    for (int &ci : c)
        cin >> ci;

    sort(c.begin(), c.end());

    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));

    for (int i = 0; i < n; i++)
        dp[i][0] = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= x; j++)
        {
            if (j - c[i] >= 0)
                dp[i][j] += dp[i + 1][j] + dp[i][j - c[i]];

            dp[i][j] %= mod;
        }
    }

    cout << dp[0][x] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}