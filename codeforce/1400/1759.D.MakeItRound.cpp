// link : https://codeforces.com/contest/1759/problem/D
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

void _DIBBA(int _DIBBA_NO)
{
    int n, m;
    cin >> n >> m;
    int N = n;
    int two = 0;
    int five = 0;

    while (n % 2 == 0)
    {
        two++;
        n /= 2;
    }

    while (n % 5 == 0)
    {
        five++;
        n /= 5;
    }

    int ex = 1;
    if (two < five)
    {
        while (ex * 2 <= m && two < five)
        {
            ex *= 2;
            two++;
        }
    }
    else if (five < two)
    {
        while (ex * 5 <= m && five < two)
        {
            ex *= 5;
            five++;
        }
    }

    while (ex * 10 <= m)
    {
        ex *= 10;
    }

    int tmp = m / ex;
    if (tmp == 0)
        tmp = 1;

    int k = ex * tmp;

    cout << N * k << endl;
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