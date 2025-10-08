// link : https://cses.fi/problemset/task/1071
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

ll getStart(ll n)
{
    return ((n - 1) * (n - 1));
}

void program()
{
    ll rw, cl;
    cin >> rw >> cl;

    if (cl >= rw)
    {
        ll s = getStart(cl);

        if (cl & 1)
        {
            ll ns = getStart(cl + 1) + 1;

            cout << ns - rw << endl;
        }
        else
        {
            cout << s + rw << endl;
        }

        return;
    }

    ll s = getStart(rw);

    if (rw & 1)
    {
        cout << s + cl << endl;
    }
    else
    {
        ll ns = getStart(rw + 1) + 1;

        cout << ns - cl << endl;
    }
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