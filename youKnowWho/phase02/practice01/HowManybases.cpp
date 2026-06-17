// link : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3368
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define int ll
#define mod 100000007

int cnt(vector<int> &ex, int t)
{
    int ans = 1;

    for (int ei : ex)
    {
        int time = ei / t;
        ans *= (time + 1);
        ans %= mod;
    }

    return ans;
}

void _DIBBA(int _DIBBA_NO, int n, int m, int t)
{

    cout << "Case " << _DIBBA_NO << ": ";

    vector<int> ex;

    int copy_n = n;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i != 0)
            continue;
        int e = 0;
        while (n % i == 0)
        {
            e++;
            n /= i;
        }

        ex.push_back(m * e);
    }

    if (n > 1)
        ex.push_back(1 * m);

    int ans = cnt(ex, t) - cnt(ex, t + 1);
    ans %= mod;
    ans += mod;
    ans %= mod;

    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int n, m, t;
    int tst = 1;
    while (t)
    {
        cin >> n >> m >> t;

        if (n == 0)
            break;
        _DIBBA(tst, n, m, t);
        tst++;
    }
    return 0;
}