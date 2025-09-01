// link : https://cses.fi/problemset/task/1635
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
int n, x;
vector<int> arr;
int mod = 1000000007;

int getMod(int v, int mod)
{
    return ((v % mod) + mod) % mod;
}

void program()
{
    cin >> n >> x;
    arr = vector<int>(n);

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> dp(x + 1);
    dp[x] = 1;

    for (int i = x; i >= 0; i--)
    {
        for (int coin : arr)
        {
            int prev = i - coin;
            // cout << prev << endl;
            if (prev >= 0)
            {
                dp[prev] += dp[i];
                dp[prev] = getMod(dp[prev], mod);
            }
        }
    }

    cout << dp[0] << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}