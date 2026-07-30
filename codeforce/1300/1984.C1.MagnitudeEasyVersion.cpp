// link : https://codeforces.com/problemset/problem/1984/C1
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'
#define int ll
#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> dp1(n);
    vector<int> dp2(n);

    dp1[0] = v[0];
    dp2[0] = abs(v[0]);

    for (int i = 1; i < n; i++)
    {
        int one = dp1[i - 1] + v[i];
        int two = abs(dp1[i - 1] + v[i]);
        int three = dp2[i - 1] + v[i];
        int four = abs(dp2[i - 1] + v[i]);
        dp1[i] = min({one, two, three, four});
        dp2[i] = max({one, two, three, four});
    }

    cout << max(abs(dp1.back()), abs(dp2.back())) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}