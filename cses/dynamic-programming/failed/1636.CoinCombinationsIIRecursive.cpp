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

vector<int> c;
vector<vector<int>> dp(3, vector<int>(9 + 1, -1));

int solve(int i, int x)
{
    if (x == 0)
        return 1;

    if (x < 0)
        return 0;

    if (i >= c.size())
        return 0;

    if (dp[i][x] != -1)
    {
        return dp[i][x];
    }
    // with out take
    int res = solve(i + 1, x) + solve(i, x - c[i]);

    dp[i][x] = res;
    return res;
}

void program()
{
    int n, x;
    cin >> n >> x;

    c = vector<int>(n);
    for (int &ci : c)
        cin >> ci;

    int res = solve(0, x);

    cout << res << endl;

    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[i].size(); j++)
            cout << dp[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    optimize();
    program();
    return 0;
}