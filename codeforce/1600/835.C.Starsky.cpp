// link : https://codeforces.com/problemset/problem/835/C
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
int n, q, c;

void program()
{
    cin >> n >> q >> c;
    vector<vector<vector<int>>> str(c + 1, vector<vector<int>>(102, vector<int>(102, 0)));

    for (int i = 0; i < n; i++)
    {
        int x, y, s;
        cin >> x >> y >> s;

        str[s][x][y]++;
    }

    for (int s = 0; s <= c; s++)
    {
        for (int i = 1; i <= 100; i++)
        {
            for (int j = 1; j <= 100; j++)
            {
                str[s][i][j] += str[s][i - 1][j] + str[s][i][j - 1] - str[s][i - 1][j - 1];
            }
        }
    }

    for (int qi = 0; qi < q; qi++)
    {
        int t, i1, j1, i2, j2;

        cin >> t >> i1 >> j1 >> i2 >> j2;
        int ans = 0;

        for (int s = 0; s <= c; s++)
        {
            int b = (s + t) % (c + 1);

            int amnt = str[s][i2][j2] - str[s][i1 - 1][j2] - str[s][i2][j1 - 1] + str[s][i1 - 1][j1 - 1];

            ans += (amnt * b);
        }

        cout << ans << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}