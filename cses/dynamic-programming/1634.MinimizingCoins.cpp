// link : https://cses.fi/problemset/task/1634/
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
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    set<int> st;
    for (int &ci : coins)
    {
        cin >> ci;
        st.insert(ci);
    }

    sort(coins.begin(), coins.end());

    vector<int> dp(x + 1, 0);

    for (int &ci : coins)
        if (ci <= x)
            dp[ci] = 1;

    for (int i = 1; i <= x; i++)
    {
        if (dp[i] == 0)
            continue;

        for (int &ci : coins)
        {
            int ni = i + ci;

            if (ni > x)
                break;

            int take = dp[i] + 1;

            if (dp[ni] == 0)
                dp[ni] = take;

            dp[ni] = min(dp[ni], take);
        }
    }

    if (dp[x])
        cout << dp[x] << endl;
    else
        cout << -1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}