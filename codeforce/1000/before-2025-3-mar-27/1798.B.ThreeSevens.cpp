// link : https://codeforces.com/problemset/problem/1798/B
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
    vector<vector<int>> days(m);
    vector<bool> mp(5e4 + 1, false);
    vector<int> ans(m, 0);
    for (int i = 0; i < m; i++)
    {
        int n;
        cin >> n;
        days[i] = vector<int>(n);

        for (int j = 0; j < n; j++)
            cin >> days[i][j];
    }

    for (int i = m - 1; i >= 0; i--)
    {
        vector<int> day = days[i];

        int winner = 0;

        for (int p : day)
        {
            if (mp[p])
                continue;

            if (winner <= 0)
            {
                winner = p;
            }
            mp[p] = true;
        }

        if (winner <= 0)
        {
            cout << -1 << endl;
            return;
        }
        ans[i] = winner;
    }

    cout << ans[0];
    for (int i = 1; i < m; i++)
        cout << " " << ans[i];
    cout << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}