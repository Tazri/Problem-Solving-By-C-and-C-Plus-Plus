// link : https://codeforces.com/problemset/problem/1498/A
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

ll dsum(ll n)
{
    ll sum = 0;

    while (n)
    {
        sum += (n % 10);
        n /= 10;
    }

    return sum;
}

void program()
{
    ll n;
    cin >> n;

    for (ll i = n; i < n + 3; i++)
    {
        if (gcd(i, dsum(i)) > 1)
        {
            cout << i << endl;
            return;
        }
    }

    cout << "Impossible" << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}