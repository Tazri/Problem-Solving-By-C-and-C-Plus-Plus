// link : https://codeforces.com/contest/230/problem/B

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

ll n = 1e6 + 12;

vector<bool> isPrime(n + 1, true);

void takePrimes()
{
    if (n < 2)
        return;

    isPrime[0] = false;
    isPrime[1] = false;

    for (ll i = 3; i * i <= n; i += 2)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= n; j += 2 * i)
            {
                isPrime[j] = false;
            }
        }
    }
}

bool check(ll x)
{
    if (x == 2)
        return true;

    if (x % 2 == 0)
        return false;

    return isPrime[x];
}

void program()
{
    takePrimes();
    ll t;
    cin >> t;

    for (ll i = 0; i < t; i++)
    {
        ll x;
        cin >> x;
        ll rt = sqrt(x);

        if (rt * rt != x)
        {
            cout << "NO" << endl;
            continue;
        }

        if (check(rt))
        {
            cout << "YES" << endl;
            continue;
        }

        cout << "NO" << endl;
    }
}

int main()
{
    optimize();
    program();

    return 0;
}