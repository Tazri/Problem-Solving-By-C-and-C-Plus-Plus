// link : https://codeforces.com/problemset/problem/2013/B
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

void test()
{
    ll n;
    cin >> n;

    if (n == 2)
    {
        ll a, b;
        cin >> a >> b;
        cout << b - a << endl;
        return;
    }

    if (n <= 1)
    {
        ll a;
        cin >> a;
        cout << a << endl;
        return;
    }

    ll sum = 0;
    for (ll i = 0; i < n - 2; i++)
    {
        ll a;
        cin >> a;
        sum += a;
    }
    ll b;
    cin >> b;
    ll minus = b - sum;
    ll final;
    cin >> final;
    final = final - minus;

    cout << final << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}