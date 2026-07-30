// link : https://open.kattis.com/problems/associativeexponents
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

#define ok cout << "What an excellent example!" << endl
#define notOk cout << "Oh look, a squirrel!" << endl

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

void _DIBBA(int _DIBBA_NO)
{
    // for (int a = 1; a <= 5; a++)
    // {
    //     for (int b = 1; b <= 5; b++)
    //     {
    //         for (int c = 1; c <= 5; c++)
    //         {
    //             int left = binpow(a, binpow(b, c));
    //             int right = binpow(binpow(a, b), c);

    //             if (left == right)
    //             {
    //                 cout << a << " " << b << " " << c << endl;
    //             }
    //         }
    //     }
    // }

    int a, b, c;
    cin >> a >> b >> c;

    if (a == 1 || c == 1)
    {
        ok;
        return;
    }

    if (b == 2 && c == 2)
    {
        ok;
        return;
    }

    notOk;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}