// link : https://cses.fi/problemset/task/1637/
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
    int n;
    cin >> n;

    vector<int> dp(n + 1, 0);

    for (int i = 0; i <= n; i++)
    {
        set<int> d;

        int cn = i;

        while (cn)
        {
            int ld = cn % 10;
            cn /= 10;
            if (ld)
                d.insert(ld);
        }

        int mn = -1;
        for (int di : d)
        {
            if (i - di >= 0)
            {
                if (mn == -1)
                    mn = dp[i - di];
                mn = min(mn, dp[i - di]);
            }
        }

        dp[i] = mn + 1;
    }

    cout << dp[n] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}