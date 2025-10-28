// link : https://codeforces.com/problemset/problem/1567/B
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

int sz = 3 * (1e5) + 34;
vector<int> x(sz, 0);

void build()
{
    for (int i = 1; i < x.size(); i++)
    {
        x[i] = i;
        x[i] ^= x[i - 1];
    }
}

void program()
{
    int a, b;

    cin >> a >> b;
    int ans = a;
    int xr = x[a - 1];

    if (xr == b)
    {
        cout << ans << endl;
        return;
    }

    int xrb = xr ^ b;

    if (xrb != a)
    {
        cout << ans + 1 << endl;
        return;
    }

    cout << ans + 2 << endl;
}

int main()
{
    optimize();
    build();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}