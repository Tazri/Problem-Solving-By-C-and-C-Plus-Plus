#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = ((int)1e6) + 123;

vector<bool> prime(N + 123, true);
vector<int> pre(N + 123, 0);

bool ok(int n)
{
    while (n)
    {
        int d = n % 10;

        if (d == 0)
            return false;
        else
            n /= 10;
    }

    return true;
}

int rm(int n)
{
    if (n < 10)
        return n;
    int cnt = 0;

    int cn = n;

    while (cn)
    {
        cnt++;
        if (cn % 10 == 0)
        {
            return -1;
        }
        cn /= 10;
    }

    int d = 1;

    for (int i = 0; i < cnt - 1; i++)
        d *= 10;

    return n % d;
}

void sieve()
{
    prime[0] = false;
    prime[1] = false;

    for (int i = 4; i <= N; i += 2)
        prime[i] = false;

    for (int i = 3; i * i <= N; i += 2)
    {
        if (!prime[i])
            continue;

        for (int j = i * i; j <= N; j += (i * 2))
            prime[j] = false;
    }

    for (int i = 2; i <= N; i++)
    {
        if (!prime[i])
            continue;

        if (i < 10)
        {
            pre[i] = 1;
            continue;
        }

        int d = rm(i);

        if (d == -1)
            continue;

        pre[i] = pre[d];
    }

    // for (int i = 2; i <= 155; i++)
    // {
    //     if (!prime[i])
    //         continue;

    //     // if (pre[i])
    //     //     cout << "i : " << i << endl;
    // }

    for (int i = 1; i <= N; i++)
        pre[i] += pre[i - 1];
}

void _DIBBA(int _DIBBA_NO)
{

    int n;
    cin >> n;
    cout << pre[n] << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    sieve();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}