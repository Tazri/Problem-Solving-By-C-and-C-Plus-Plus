// link : https://codeforces.com/problemset/problem/189/A
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
    set<int> st;
    for (int i = 0; i < 3; i++)
    {
        int ai;
        cin >> ai;
        st.insert(ai);
    }

    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        int mx = 0;
        for (int si : st)
        {
            if (i - si < 0)
                continue;

            mx = max(dp[i - si], mx);
        }

        if (mx)
            dp[i] = mx + 1;
    }
    // for (int di : dp)
    //     cout << di << " ";
    // cout << endl;
    cout << dp[n] - 1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}