// link : https://atcoder.jp/contests/abc327/tasks/abc327_b?lang=en
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

ll gpow(ll base, ll p)
{
    ll ans = 1;
    for (ll i = 0; i < p; i++)
        ans *= base;
    return ans;
}

void program()
{
    ll b;
    cin >> b;

    for (int i = 1; i < 63; i++)
    {
        ll a = gpow(i, i);

        if (a == b)
        {
            cout << i << endl;
            return;
        }

        if (a > b)
            break;
    }

    cout << -1 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}