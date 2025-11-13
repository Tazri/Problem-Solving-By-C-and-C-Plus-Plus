// link : https://codeforces.com/problemset/problem/1385/A
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
    int x, y, z;
    cin >> x >> y >> z;

    int mx = max(x, max(y, z));

    int cnt = 0;

    if (mx == x)
        cnt++;
    if (mx == y)
        cnt++;
    if (mx == z)
        cnt++;

    if (cnt <= 1)
    {
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    if (x == y && y == z)
    {
        cout << y << " " << y << " " << y << endl;
        return;
    }

    int mn = min(x, min(y, z));

    cout << mx << " " << mn << " " << mn << endl;
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