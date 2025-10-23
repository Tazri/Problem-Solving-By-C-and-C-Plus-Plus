// link : https://cses.fi/problemset/task/1636/
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
    int n, x;
    cin >> n >> x;
    vector<int> prev(x + 1, 0);
    vector<int> dp(x + 1, 0);
    prev[0] = 1;
    dp[0] = 1;

    vector<int> c(n);
    for (int &ci : c)
        cin >> ci;
    sort(c.begin(), c.end());

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= x; j++)
        {
            if (j - c[i] >= 0)
                dp[j] += dp[j - c[i]] + prev[j];

            dp[j] %= mod;
        }

        prev = dp;
        dp = vector<int>(x + 1, 0);
        dp[0] = 1;
    }

    cout << prev.back() << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}