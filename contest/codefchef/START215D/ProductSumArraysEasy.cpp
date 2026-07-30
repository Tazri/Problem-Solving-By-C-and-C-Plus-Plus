#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

int sz = 1e5;

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

void program()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    vector<int> v;

    for (int p : primes)
    {
        if (n % p != 0)
            continue;

        while (n % p == 0)
        {
            v.push_back(p);
            n /= p;
        }
    }

    if (n != 1)
        v.push_back(n);

    cout << min(3, (int)v.size()) << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    takePrimes(sz, primes);
    while (t--)
        program();
    return 0;
}