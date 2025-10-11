// link : https://cses.fi/problemset/task/1633
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

const ll mod = 1e9 + 7;

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
    ll n;
    cin >> n;
    vector<ll> dp(n + 1);

    dp[0] = 1;

    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= 6; j++)
        {
            ll imj = i - j;

            if (imj >= 0)
                dp[i] += dp[imj];
            dp[i] %= mod;
        }
    }

    cout << dp[n] % mod << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}