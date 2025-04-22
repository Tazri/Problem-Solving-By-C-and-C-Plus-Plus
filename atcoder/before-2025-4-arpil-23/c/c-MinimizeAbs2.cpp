// link : https://atcoder.jp/contests/abc330/tasks/abc330_c?lang=en
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

ll getDiff(ll x, ll y, ll d)
{
    ll s = (x * x) + (y * y);
    ll diff = s > d ? s - d : d - s;
    return diff;
}

void program()
{
    ll d;
    cin >> d;
    ll ans = getDiff(0, d, d);
    ll x = 0;
    while (x * x <= d)
    {
        ll yy = d - (x * x);
        ll y = sqrt(yy);
        ll d1 = getDiff(x, y, d);
        ll d2 = getDiff(x, y + 1, d);
        ll d3 = getDiff(x, y - 1, d);

        ans = min(ans, min(d1, min(d2, d3)));
        x++;
        if (ans == 0)
            break;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}