#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int N = 1e8;
vector<bool> isPrime(N + 1, true);
vector<int> primes;
void sieve()
{

    for (int i = 4; i <= N; i += 2)
        isPrime[i] = false;

    for (int i = 3; i * i <= N; i += 2)
    {
        if (!isPrime[i])
            continue;

        for (int j = i * i; j <= N; j += (2 * i))
            isPrime[j] = false;
    }

    primes.push_back(2);

    for (int i = 3; i <= N; i += 2)
        if (isPrime[i])
            primes.push_back(i);

    for (int i = 0; i < primes.size(); i += 100)
        cout << primes[i] << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    sieve();
    int t = 1;
    // cin >> t;
    // for (int i = 1; i <= t; i++)
    //     _DIBBA(i);
    return 0;
}