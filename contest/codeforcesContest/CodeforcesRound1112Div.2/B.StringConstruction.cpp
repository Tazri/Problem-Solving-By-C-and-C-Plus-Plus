#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int f(int n)
{
    return n - 1;
}

void _DIBBA(int _DIBBA_NO)
{
    int n, k;
    cin >> n >> k;
    int one = n / 2;
    int zero = (n + 1) / 2;

    int mx = f(one) + f(zero);

    if (k > mx)
    {
        cout << -1 << endl;
        return;
    }

    int d = (mx - k);
    string right;

    bool flag = true;
    for (int i = 0; i < d; i++)
    {
        if (flag)
        {
            zero--;
            right.push_back('0');
            flag = false;
        }
        else
        {
            one--;
            right.push_back('1');
            flag = true;
        }
    }

    string ans = string(zero, '0') + string(one, '1');
    ans += right;
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