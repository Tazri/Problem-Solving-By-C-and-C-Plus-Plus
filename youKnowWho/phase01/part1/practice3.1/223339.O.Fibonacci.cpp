// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/my
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

vector<ll> dp(31, -1);

ll fib(ll n)
{
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = fib(n - 1) + fib(n - 2);
}

void program()
{
    dp[1] = 0;
    dp[2] = 1;
    ll n;
    cin >> n;
    cout << fib(n) << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}