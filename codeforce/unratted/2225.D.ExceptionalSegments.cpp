// link : https://codeforces.com/contest/2225/problem/D
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

#define int ll
// 1 -> 1
// 3 -> 0
int mod = 998244353;
int cnt1(int x)
{
    int bs = x / 4;
    int cnt = bs;

    for (int i = (bs * 4); i <= x; i++)
    {
        if (i % 4 == 1)
            cnt++;
    }

    return cnt;
}

int cnt0(int x)
{
    int bs = x / 4;
    int cnt = bs;

    for (int i = (bs * 4); i <= x; i++)
    {
        if (i % 4 == 3)
            cnt++;
    }

    return cnt + 1;
}

void _DIBBA()
{

    int n, x;
    cin >> n >> x;

    int p1 = (cnt1(x - 1) % mod) * ((cnt1(n) - cnt1(x - 1)) % mod) % mod;
    int p2 = (cnt0(x - 1) % mod) * ((cnt0(n) - cnt0(x - 1)) % mod) % mod;

    cout << (p1 + p2) % mod << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();

    int t = 1;
    cin >> t;
    while (t--)
        _DIBBA();
    0;
}
