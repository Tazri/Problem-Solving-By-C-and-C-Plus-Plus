// link : https://codeforces.com/gym/106592/problem/F
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define _GORIBER_TURBO_MODE_ON()  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<int> primes;
int N = 1e5;
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
    int original_n = n;
    int ans = 1;
    for (int i = 0; i < primes.size() && primes[i] * primes[i] <= n; i++)
    {
        int pi = primes[i];

        if (n % pi != 0)
            continue;

        int times = 0;
        while (n % pi == 0)
        {
            times++;
            n /= pi;
        }

        ans *= ((times / 2) + 1);
    }

    int rt = sqrt(original_n);
    if (rt * rt == original_n)
        ans--;

    cout << ans << endl;
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