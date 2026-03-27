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

int N = 1e6;

vector<int> primes(N);

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

void precal()
{
    takePrimes(N, primes);
}

void _DIBBA(int _DIBBA_NO)
{
    int n;
    cin >> n;

    cout << "Case " << _DIBBA_NO << ": ";

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    int cnt = 1;

    for (int i = 0; i < primes.size() && primes[i] * primes[i] <= n; i++)
    {
        int p = primes[i];

        if (n % p != 0)
            continue;

        int time = 0;

        while (n % p == 0)
        {
            time++;
            n /= p;
        }

        cnt *= (time + 1);
    }

    if (n > 1)
        cnt *= 2;

    cout << cnt - 1 << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    precal();
    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}