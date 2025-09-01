// link : https://codeforces.com/problemset/problem/2050/B
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

    ll e = 0;
    ll o = 0;
    ll esum = 0;
    ll osum = 0;

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;
        if (i & 1)
        {
            o++;
            osum += ai;
        }
        else
        {
            e++;
            esum += ai;
        }
    }

    ll sum = osum + esum;

    if (sum % n != 0)
    {
        cout << "NO" << endl;
        return;
    }

    ll h = sum / n;

    if (esum % e == 0 && esum / e == h && osum % o == 0 && osum / o == h)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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