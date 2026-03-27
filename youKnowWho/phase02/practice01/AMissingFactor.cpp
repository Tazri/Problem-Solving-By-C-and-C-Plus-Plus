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

int N = 1e5;
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

int fsqrt(int n)
{
    int l = 0, r = n;
    int ans = 0;

    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (mid <= n / mid)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return ans;
}

void _DIBBA(int _DIBBA_NO)
{

    int n;
    cin >> n;

    int rt = fsqrt(n);
    vector<int> vp;

    for (int i = 0; primes[i] * primes[i] <= rt && i < primes.size(); i++)
    {
        int p = primes[i];

        if (rt % p != 0)
            continue;

        vp.push_back(p);

        while (rt % p == 0)
        {
            rt /= p;
        }
    }

    if (rt > 1)
        vp.push_back(rt);

    cout << *max_element(vp.begin(), vp.end()) << endl;
}

int32_t main()
{
    _GORIBER_TURBO_MODE_ON();
    takePrimes(N, primes);
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
        _DIBBA(i);
    return 0;
}