// link : https://codeforces.com/problemset/problem/877/B
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
    string s;
    cin >> s;
    int n = s.size();

    vector<int> b(n + 1);
    vector<int> a(n + 1);

    for (int i = 0; i < n; i++)
        if (s[i] == 'a')
            a[i + 1] = 1;
        else
            b[i + 1] = 1;

    vector<int> pre = a;
    vector<int> dp(n + 1);
    for (int i = 1; i <= n; i++)
        pre[i] += pre[i - 1];

    for (int i = 1; i <= n; i++)
    {
        dp[i] = max({pre[i], dp[i - 1] + b[i]});
    }

    int mx;
    int totalA = pre.back();

    for (int i = 1; i <= n; i++)
    {
        int rest = totalA - pre[i];
        int len = dp[i] + rest;

        if (i == 1)
            mx = len;
        mx = max(len, mx);
    }

    cout << mx << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}