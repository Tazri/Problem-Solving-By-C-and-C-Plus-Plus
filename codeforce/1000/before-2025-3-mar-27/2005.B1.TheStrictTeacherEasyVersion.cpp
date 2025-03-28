// link : https://codeforces.com/problemset/problem/2005/B1
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
    int n, m, q;
    cin >> n >> m >> q;
    int a, b;
    cin >> a >> b;

    int c;
    cin >> c;

    int mn = min(a, b);
    int mx = max(a, b);
    if (c < mn)
    {
        cout << mn - 1 << endl;
    }
    else if (c > mx)
    {
        cout << n - mx << endl;
    }
    else
    {
        int mid = (mn + mx) / 2;
        int t1 = mx - mid;
        int t2 = mid - mn;
        cout << min(t1, t2) << endl;
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