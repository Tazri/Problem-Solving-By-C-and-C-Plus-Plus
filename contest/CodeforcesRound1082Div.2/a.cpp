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

#define int ll

void program()
{
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << "YES" << endl;
        return;
    }

    if (x < 2)
    {
        cout << "NO" << endl;
        return;
    }

    int a = abs(y);
    int d = y < 0 ? 4 * a : a * 2;
    x -= d;

    if (x < 0)
    {
        cout << "NO" << endl;
        return;
    }

    int r = x % 6;

    if (r % 3 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int32_t main()
{
    optimize();
    int t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}