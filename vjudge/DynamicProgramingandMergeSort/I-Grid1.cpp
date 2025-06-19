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

int mod = 1000000007;
int getMod(int v, int mod)
{
    return ((v % mod) + mod) % mod;
}

int h, w;
vector<vector<int>> dp;
vector<string> mp;
vector<vector<bool>> visited;

bool isValid(int i, int j)
{
    if (i < 0 || i >= h || j < 0 || j >= w)
        return false;

    if (mp[i][j] == '#')
        return false;

    return true;
}

void program()
{
    cin >> h >> w;

    dp = vector<vector<int>>(h, vector<int>(w, 0));
    mp = vector<string>(h);
    visited = vector<vector<bool>>(h, vector<bool>(w, false));

    for (int i = 0; i < h; i++)
        cin >> mp[i];

    dp[h - 1][w - 1] = 1;
    queue<pair<int, int>> q;
    visited[h - 1][w - 1] = true;
    q.push({h - 1, w - 1});

    while (q.size() > 0)
    {
        pair<int, int> front = q.front();
        q.pop();
        int i = front.first;
        int j = front.second;

        // try up
        if (isValid(i - 1, j))
        {
            dp[i - 1][j] += dp[i][j];
            dp[i - 1][j] = getMod(dp[i - 1][j], mod);
            if (visited[i - 1][j] == false)
            {
                visited[i - 1][j] = true;
                q.push({i - 1, j});
            }
        }

        // try left
        if (isValid(i, j - 1))
        {
            dp[i][j - 1] += dp[i][j];
            dp[i][j - 1] = getMod(dp[i][j - 1], mod);
            if (visited[i][j - 1] == false)
            {
                visited[i][j - 1] = true;
                q.push({i, j - 1});
            }
        }
    }

    // cout << "dp : " << endl;
    // for (int i = 0; i < h; i++)
    // {
    //     for (int j = 0; j < w; j++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout << dp[0][0] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}