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

vector<string> grid;
int n;
vector<vector<int>> dp;
const int mod = 1e9 + 7;

int solve(int r, int c)
{

    if (r >= n || c >= n)
        return 0;

    if (grid[r][c] == '*')
        return 0;
    if (r == n - 1 && c == n - 1)
        return 1;

    if (dp[r][c] != -1)
        return dp[r][c];

    int sum = solve(r + 1, c) + solve(r, c + 1);
    sum %= mod;
    dp[r][c] = sum;
    return sum;
}

void program()
{
    cin >> n;

    grid = vector<string>(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    dp = vector<vector<int>>(n, vector<int>(n, -1));
    int ans = solve(0, 0);
    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}