// link : https://codeforces.com/problemset/problem/1582/B
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

long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

void program()
{
    ll n;
    cin >> n;
    ll one = 0;
    ll zero = 0;

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;
        if (ai == 1)
            one++;
        else if (ai == 0)
            zero++;
    }

    ll com = binpow(2, zero);

    cout << one * com << endl;
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