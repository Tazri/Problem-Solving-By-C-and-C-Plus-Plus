// link : https://codeforces.com/contest/2240/problem/A
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
    int n, k;
    cin >> n >> k;

    int sum = 0;
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int value = (1LL << i);

        if (sum + (value * k) <= n)
        {
            ans += k;
            sum += (value * k);
            continue;
        }
        int d = n - sum;

        int can = d / value;
        ans += can;
        break;
    }

    cout << ans << endl;
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