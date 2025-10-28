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
    if (n & 1)
    {
        cout << -1 << endl;
        return;
    }

    ll a = n;
    ll b = a >> 1;
    ll c = a >> 1;

    ll mask = 1;

    while (mask)
    {
        if ((a & mask) == 1)
        {
            mask <<= 1;
            continue;
        }

        if ((b & mask) == 0)
        {
            mask <<= 1;
            continue;
        }

        a |= mask;
        ll invers = ~mask;
        b = b & invers;
        break;
    }

    if (a == 0 || b == 0 || c == 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << a << " " << b << " " << c << endl;
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