// link : https://codeforces.com/problemset/problem/1921/C
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

void test()
{
    ll n, f, a, b;

    cin >> n >> f >> a >> b;

    vector<ll> allM(n + 1);
    allM[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> allM[i];
    }

    // think that, is send the first message
    ll needCharge = 0;

    for (ll i = 1; i <= n; i++)
    {
        // if phone is on
        ll onCharge = (allM[i] - allM[i - 1]) * a;
        ll mnCharge = min(onCharge, b);
        needCharge += mnCharge;
        if (needCharge >= f)
        {
            break;
        }
    }

    if (needCharge >= f)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}