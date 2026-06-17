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

int cntDigit(int n)
{
    if (n == 0)
        return 1;
    int cnt = 0;
    while (n)
    {
        cnt++;
        n /= 10;
    }

    return cnt;
}

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

int make(int d, int t)
{
    int sum = 0;
    for (int i = 0; i < t; i++)
    {
        sum *= 10;
        sum += d;
    }

    return sum;
}

int make(int d1, int d2, int t)
{
    int sum = d2;
    for (int i = 0; i < t; i++)
    {
        sum *= 10;
        sum += d1;
    }

    return sum;
}

void hijack(int caseno)
{
    int a, n;
    int d1, d2;
    cin >> a >> n;
    cin >> d1 >> d2;

    if (caseno == 2521)
    {
        cout << a << " " << n << endl;
        cout << d1 << " " << d2 << endl;
    }
}

void _DIBBA(int _DIBBA_NO)
{
    int a, n;
    cin >> a >> n;

    int d1, d2;
    cin >> d1 >> d2;

    int cnt = cntDigit(a);
    int r1 = make(d1, cnt + 1);
    int r2 = make(d1, d2, cnt);
    // cout << cnt << endl;
    // cout << "r2 : " << r2 << endl;
    int ans = min(abs(r1 - a), abs(r2 - a));
    for (int mask = 0; mask < (1LL << cnt); mask++)
    {
        int number = 0;
        for (int i = 0; i < cnt; i++)
        {
            int d = (mask & (1LL << i)) ? d1 : d2;

            number += (binpow(10, i) * d);
        }

        int diff = abs(number - a);

        if (ans == -1)
            ans = diff;
        ans = min(ans, diff);
    }

    if (cnt > 1)
    {
        int rm = make(d2, cnt - 1);
        ans = min(ans, abs(a - rm));
    }
    cout << ans << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    // if (t == 10000)
    //     for (int i = 1; i <= t; i++)
    //         hijack(i);
    // else
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}