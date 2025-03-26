// link : https://codeforces.com/problemset/problem/1668/A
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
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 1)
    {
        cout << 0 << endl;
        return;
    }

    int mx = max(n, m);
    int mn = min(n, m);
    if (mx == 2 && mn == 1)
    {
        cout << 1 << endl;
        return;
    }

    if (mn == 1)
    {
        cout << -1 << endl;
        return;
    }

    if (mn == mx)
    {
        int need = (mn - 1) * 2;
        cout << need << endl;
        return;
    }

    int need = (mn - 1) * 2;
    int diff = mx - mn;
    need += diff;
    int half = diff / 2;
    need += (half * 2);
    cout << need << endl;
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
