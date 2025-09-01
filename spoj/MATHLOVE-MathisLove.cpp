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

ll sum(ll n)
{
    return (n * (n + 1)) / 2;
}

void program()
{
    ll y;
    cin >> y;

    ll l = 1;
    ll r = y;

    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        ll cy = sum(mid);

        if (cy == y)
        {
            cout << mid << endl;
            return;
        }

        if (cy > y)
            r = mid - 1;
        else
            l = mid + 1;
    }

    cout << "NAI" << endl;
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