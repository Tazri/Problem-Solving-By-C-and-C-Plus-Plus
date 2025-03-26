// link : https://codeforces.com/problemset/problem/1764/B
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
    int n;
    cin >> n;
    int mn;
    int mx;
    int g;
    cin >> g;
    mn = g;
    mx = g;

    for (int i = 1; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        mn = min(mn, tmp);
        mx = max(mx, tmp);
        g = gcd(g, tmp);
    }

    if (n <= 1)
    {
        cout << 1 << endl;
        return;
    }

    if (g == 1)
    {
        cout << mx << endl;
        return;
    }

    int ans = mx / g;
    cout << ans << endl;
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