#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = 20000000;

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

vector<int> v;

void precal()
{
    takePrimes(N, primes);

    for (int i = 0; i < primes.size() - 1; i++)
    {
        if (primes[i] + 2 == primes[i + 1])
            v.push_back(primes[i]);
    }
}

void _DIBBA(int n)
{
    n--;
    cout << "(" << v[n] << ", " << v[n] + 2 << ")" << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int n;
    while (cin >> n)
        _DIBBA(n);
    return 0;
}