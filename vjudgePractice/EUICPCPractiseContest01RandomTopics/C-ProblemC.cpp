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

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int f(int a, int b, int x)
{
    int base = 0;
    int ans = 100;

    while (true)
    {
        for (int i = 0; i <= 30; i++)
        {
            if (i + base > 60)
                break;
            for (int j = 0; j <= 30; j++)
            {
                if (i + j + base > 60)
                    break;
                int d = b + j;
                int lw = binpow(x, i);
                if (lw > d)
                    d = 0;
                else
                    d /= lw;

                int take = base + j + i + abs(a - d);
                ans = min(ans, take);
                if (lw > d)
                    break;
            }
        }

        if (a == 0)
            break;

        a /= x;
        base++;
    }

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{
    int a, b, x;
    cin >> a >> b >> x;

    // if (x > a && x > b)
    // {
    //     if (a / x == b || b / x == a || a + 1 == b || b + 1 == a)
    //     {
    //         cout << 1 << endl;
    //         return;
    //     }
    //     cout << 2 << endl;
    //     return;
    // }

    int a1 = f(a, b, x);
    int a2 = f(b, a, x);
    // cout << "a1 : " << a1 << endl;
    cout << min(a1, a2) << endl;
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