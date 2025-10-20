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
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    if (y < b)
    {
        cout << -1 << endl;
        return;
    }

    int d = abs(x - y);
    int ax = (y - d) - d;

    if (a < ax)
    {
        cout << -1 << endl;
        return;
    }

    int ans = 0;

    if (a > ax)
    {
        ans += a - ax;
        a -= ax;
    }

    int b = abs(y - b);
    ax -= b;

    ans += abs(y - b);

    cout << ans << endl;
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