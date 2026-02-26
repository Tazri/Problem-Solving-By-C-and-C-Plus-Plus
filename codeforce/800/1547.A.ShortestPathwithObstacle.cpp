// link : https://codeforces.com/problemset/problem/1547/A
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
    pair<int, int> a, b, c;

    cin >> a.first >> a.second;
    cin >> b.first >> b.second;
    cin >> c.first >> c.second;

    int ans = abs(a.first - b.first) + abs(a.second - b.second);

    if (a.first == b.first && b.first == c.first)
    {
        if ((a.second <= c.second && c.second <= b.second) || (b.second <= c.second && c.second <= a.second))
        {
            cout << ans + 2 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    else if (a.second == b.second && b.second == c.second)
    {
        if ((a.first <= c.first && c.first <= b.first) || (b.first <= c.first && c.first <= a.first))
        {
            cout << ans + 2 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    else
    {
        cout << ans << endl;
    }
}

int32_t main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}