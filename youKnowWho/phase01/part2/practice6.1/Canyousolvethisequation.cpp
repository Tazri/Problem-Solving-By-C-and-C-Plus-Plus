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
    cout.precision(4);            \
    cout.setf(ios::fixed, ios::floatfield)

#define E 0.0000000001

double f(double x)
{
    return (8 * pow(x, 4.0)) + (7 * pow(x, 3.0)) + (2 * pow(x, 2.0)) + (3 * x) + 6;
}

void program()
{
    double y;
    cin >> y;

    dl l = 0;
    dl r = 100;
    dl ans = -1;

    if (f(l) <= y && y <= f(r))
    {
        while (l <= r)
        {
            dl mid = (r + l) / 2;
            ans = mid;

            if (f(mid) > y)
            {
                r = mid - E;
            }
            else
            {
                l = mid + E;
            }
        }
        cout << ans << endl;
        return;
    }

    cout << "No solution!" << endl;
}

int32_t main()
{
    optimize();
    fraction();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}