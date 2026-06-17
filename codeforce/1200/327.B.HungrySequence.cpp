// link : https://codeforces.com/problemset/problem/327/B
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = 1e7;

vector<int> primes;

void takePrimes(int n, vector<int> &primes)
{
    if (n < 2)
        return;

    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

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
    takePrimes(N, primes);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cout << primes[i] << " \n"[i == n - 1];
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