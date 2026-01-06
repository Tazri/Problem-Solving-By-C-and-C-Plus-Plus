// link : https://www.hackerrank.com/contests/projecteuler/challenges/euler034/problem
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

vector<ll> fact(10, 1);

void build()
{
    fact[0] = 1;

    for (ll i = 1; i <= 9; i++)
        fact[i] *= fact[i - 1] * i;
}

bool check(ll n)
{
    ll sum = 0;
    ll cn = n;
    while (n)
    {
        ll d = n % 10;
        sum += fact[d];
        n /= 10;
    }

    return sum % cn == 0;
}

void program()
{
    ll n;
    cin >> n;

    ll sum = 0;

    for (ll i = 10; i <= n; i++)
        if (check(i))
            sum += i;

    cout << sum << endl;
}

int32_t main()
{
    optimize();
    build();
    program();
    return 0;
}