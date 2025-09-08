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

bool isOdd(ll n)
{
    return n & 1;
}

bool isEven(ll n)
{
    return (n % 2 == 0);
}

void program()
{
    ll a, b;
    cin >> a >> b;

    if (isEven(a) && isOdd(b))
    {
        cout << -1 << endl;
        return;
    }

    if (b == 1)
    {
        if (a & 1)
            cout << a + b << endl;
        else
            cout << -1 << endl;
        return;
    }

    if (isOdd(a) && isOdd(b))
    {
        cout << (a * b) + 1 << endl;
        return;
    }

    if (isEven(b))
    {
        vector<ll> allk;
        ll cb = b;
        ll ans = -1;

        if (isEven(a + b))
            ans = a + b;

        while (isEven(cb))
        {
            allk.push_back(2);
            cb /= 2;
        }
        allk.push_back(cb);

        for (ll i = 1; i < allk.size() - 1; i++)
        {
            allk[i] *= allk[i - 1];
        }

        for (ll k : allk)
        {
            ll res = (a * k) + (b / k);
            if (isEven(res))
                ans = max(ans, res);
        }

        cout << ans << endl;
        return;
    }

    cout << -1 << endl;
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