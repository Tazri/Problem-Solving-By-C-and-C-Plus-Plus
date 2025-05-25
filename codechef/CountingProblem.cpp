// link : https://www.codechef.com/problems/COUNTP
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

    ll s1 = 0;
    ll s2 = 0;
    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;

        if (ai % 2 == 0)
            continue;

        if (s1 % 2 == 0)
        {
            s1 += ai;
        }
        else if (s2 % 2 == 0)
        {
            s2 += ai;
        }
        else
        {
            s1 += ai;
        }
    }

    if ((s1 % 2 != 0) && (s2 % 2 != 0))
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
    return;
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