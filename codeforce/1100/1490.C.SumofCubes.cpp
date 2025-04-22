// link : https://codeforces.com/problemset/problem/1490/C
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

bool isCube(ll x)
{
    ll l = 1;
    ll r = x;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (mid > x / (mid * mid))
        {
            r = mid - 1;
        }
        else
        {
            ll cu = mid * mid * mid;
            if (cu == x)
                return true;
            l = mid + 1;
        }
    }

    return false;
}

void program()
{
    ll x;
    cin >> x;
    bool isFound = false;

    for (ll i = 1; i <= x; i++)
    {
        ll cu = i * i * i;

        if (cu >= x)
        {
            break;
        }

        ll left = x - cu;

        if (isCube(left))
        {
            isFound = true;
            break;
        }
    }

    if (isFound)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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