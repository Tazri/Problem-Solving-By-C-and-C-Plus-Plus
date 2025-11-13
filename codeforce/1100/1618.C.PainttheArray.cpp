// link : https://codeforces.com/problemset/problem/1618/C
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

void program()
{
    ll n;
    cin >> n;
    vector<ll> v(n);

    for (ll &vi : v)
        cin >> vi;

    ll odd = v[1];
    ll even = v[0];

    for (ll i = 0; i < n; i++)
        if (i & 1)
        {
            odd = gcd(odd, v[i]);
        }
        else
            even = gcd(even, v[i]);

    bool oddOk = true;
    bool evenOk = true;
    for (ll i = 0; i < n; i++)
    {
        if (i & 1)
        {
            if (v[i] % even == 0)
            {
                evenOk = false;
            }
        }

        else
        {
            if (v[i] % odd == 0)
            {
                oddOk = false;
            }
        }
    }

    if (evenOk)
    {
        cout << even << endl;
        return;
    }

    if (oddOk)
    {
        cout << odd << endl;
        return;
    }

    cout << 0 << endl;
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