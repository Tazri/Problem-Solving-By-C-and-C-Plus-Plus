// link : https://codeforces.com/problemset/problem/1560/B
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
    int a, b, c;
    cin >> a >> b >> c;

    int mn = min(a, b);
    int mx = max(a, b);

    int d = mx - mn - 1;
    int n = 2 + (2 * d);

    int hd = ((n - 2) / 2) + 1;

    mn += hd;
    mn %= n;
    if (mn == 0)
        mn = n;

    if (mn != mx)
    {
        cout << -1 << endl;
        return;
    }

    if (c > n)
    {
        cout << -1 << endl;
        return;
    }

    int ans = (c + d + 1) % n;
    if (ans == 0)
        ans = n;

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