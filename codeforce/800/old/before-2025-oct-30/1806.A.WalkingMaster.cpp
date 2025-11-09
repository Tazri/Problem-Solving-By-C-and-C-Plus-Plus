// link : https://codeforces.com/contest/1806/problem/A
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

    if (a == x && b == y)
    {
        cout << 0 << endl;
        return;
    }

    if (y < b)
    {
        cout << -1 << endl;
        return;
    }

    int yd = y - b;
    int ans = yd;
    int xshould = x - yd;

    if (a < xshould)
    {
        cout << -1 << endl;
        return;
    }

    int d = a - xshould;
    ans += d;
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