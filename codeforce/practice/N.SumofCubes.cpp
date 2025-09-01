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

bool isCube(ll n)
{
    ll l = 1;
    ll r = n;

    while (l <= r)
    {
        ll m = l + (r - l) / 2;
        ll mm = m * m;
        ll mmm = m * mm;

        if (mm > n)
        {
            r = m - 1;
        }
        else if (mmm == n)
        {
            return true;
        }
        else if (mmm > n)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }

    return false;
}

void program()
{
    ll n;
    cin >> n;

    ll l = 1;
    ll r = n;

    for (ll i = 1; i * i * i <= n; i++)
        r = i;

    while (l <= r)
    {
        ll m = l + (r - l) / 2;

        ll mm = m * m;
        ll mmm = m * mm;

        if (mm > n)
        {
            r = m - 1;
            continue;
        }

        if (mmm >= n)
        {
            r = m - 1;
        }
        else
        {
            ll left = n - mmm;
            cout << "m : " << m << " left : " << left << endl;

            if (isCube(left))
            {
                cout << "YES" << endl;
                return;
            }
            l = m + 1;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}