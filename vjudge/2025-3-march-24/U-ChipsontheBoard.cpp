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

    ll asum = 0;
    ll bsum = 0;

    ll mnA;
    cin >> mnA;
    asum += mnA;

    for (ll i = 1; i < n; i++)
    {
        ll ai;
        cin >> ai;
        mnA = min(mnA, ai);
        asum += ai;
    }

    ll mnB;
    cin >> mnB;
    bsum += mnB;
    for (ll i = 1; i < n; i++)
    {
        ll bi;
        cin >> bi;
        mnB = min(mnB, bi);
        bsum += bi;
    }

    ll ans = min(bsum + (mnA * n), asum + (mnB * n));
    cout << ans << endl;
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