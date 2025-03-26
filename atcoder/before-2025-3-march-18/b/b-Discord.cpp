// link : https://atcoder.jp/contests/abc303/tasks/abc303_b?lang=en
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

void getMp(vector<vector<bool>> &mp, int n)
{
    mp = vector<vector<bool>>(n + 1);

    for (int i = 0; i <= n; i++)
    {
        mp[i] = vector<bool>(n + 1, false);
        mp[i][i] = true;
    }

    for (int i = 0; i <= n; i++)
    {
        mp[0][i] = true;
        mp[i][0] = true;
    }
}

void program()
{
    int n, m;
    cin >> n >> m;
    vector<vector<bool>> mp;

    getMp(mp, n);

    for (int i = 0; i < m; i++)
    {
        vector<int> peoples(n);

        for (int j = 0; j < n; j++)
        {
            cin >> peoples[j];
        }

        // start marked
        for (int j = 1; j < n; j++)
        {
            mp[peoples[j]][peoples[j - 1]] = true;
            mp[peoples[j - 1]][peoples[j]] = true;
        }
    }

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (!mp[i][j])
            {
                ans++;
                mp[i][j] = true;
                mp[j][i] = true;
            }
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}