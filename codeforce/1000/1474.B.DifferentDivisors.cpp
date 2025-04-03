// link : https://codeforces.com/problemset/problem/1474/B
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

bool isPrime(ll n)
{
    if (n == 1)
        return true;
    if (n == 2)
        return true;

    for (ll i = 3; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

ll takeNextPrime(ll n)
{
    if (n == 2)
        return n;

    if (n % 2 == 0)
        n++;

    ll i = n;
    while (true)
    {
        if (isPrime(i))
            return i;
        i += 2;
    }
}

void program()
{
    ll d;
    cin >> d;
    ll p = takeNextPrime(d + 1);
    ll q = takeNextPrime(p + d);

    ll n = min(p * q, p * p * p);
    cout << n << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}