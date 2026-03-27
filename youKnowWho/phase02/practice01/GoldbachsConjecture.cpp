#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = 1e7;
vector<int> primes;
vector<bool> isPrime(N + 1, true);

void takePrimes(int n, vector<int> &primes)
{
    if (n < 2)
        return;

    isPrime[0] = isPrime[1] = false;
    for (int i = 4; i <= n; i += 2)
        isPrime[i] = false;

    primes.clear();
    primes.push_back(2);

    for (int i = 3; i * i <= n; i += 2)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= n; j += 2 * i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 3; i <= n; i += 2)
        if (isPrime[i])
            primes.push_back(i);
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;
    cout << "Case " << _DIBBA_NO << ": ";

    int cnt = 0;

    for (int pi : primes)
    {
        if (pi >= n)
            break;

        int a = pi;
        int b = n - a;

        if (a > b)
            break;

        if (isPrime[b])
        {
            cnt++;
        }
    }

    cout << cnt << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    takePrimes(N, primes);
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}