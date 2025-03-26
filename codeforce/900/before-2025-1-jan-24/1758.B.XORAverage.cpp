// link : https://codeforces.com/problemset/problem/1758/B
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
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (n == 2)
    {
        cout << 1 << " " << 3 << endl;
        return;
    }

    if (n & 1)
    {
        cout << 1;
        for (ll i = 1; i < n; i++)
        {
            cout << " " << 1;
        }
        cout << endl;
        return;
    }

    ll nc = n;
    ll a = 0;
    while (nc)
    {
        if (!a)
        {
            a = 1;
        }
        else
        {
            a <<= 1;
            a |= 1;
        }
        nc >>= 1;
    }

    ll b = n ^ a;
    ll sum = n * n;
    ll left = sum - (a + b);
    ll d = n - 2;
    ll c = left / d;

    if (left % d == 0)
    {
        cout << c;

        for (int i = 1; i < n - 2; i++)
        {
            cout << " " << c;
        }
        cout << " " << a << " " << b << endl;
        return;
    }

    int r = left % d;
    cout << c + 1;
    r--;
    for (int i = 1; i < n - 2; i++)
    {
        if (r > 0)
        {
            cout << " " << c + 1;
        }
        else
        {
            cout << " " << c;
        }
        r--;
    }
    cout << " " << a << " " << b << endl;
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