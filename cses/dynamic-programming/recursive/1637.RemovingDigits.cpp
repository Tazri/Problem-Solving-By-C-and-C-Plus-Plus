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

vector<int> dp;

int solve(int num)
{
    if (num == 0)
        return 0;

    if (dp[num] != -1)
        return dp[num];

    set<int> d;

    int cn = num;

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
        int res = solve(num - di);
        if (mn == -1)
            mn = res;
        mn = min(mn, res);
    }

    dp[num] = mn + 1;
    return dp[num];
}

void program()
{
    int n;
    cin >> n;
    dp = vector<int>(n + 1, -1);
    int ans = solve(n);

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}