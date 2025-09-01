// linK : https://lightoj.com/problem/crossed-ladders
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

const double d = 0.00000000001;

double calc(double w, double x, double y)
{
    double a = sqrt((x * x) - (w * w));
    double b = sqrt((y * y) - (w * w));

    double h = (a * b) / (a + b);
    return h;
}

void program(int caseno)
{
    double x, y, c;
    cin >> x >> y >> c;

    double l = 0;
    double r = min(x, y);
    double ans = x;

    while (l <= r)
    {
        double mid = l + (r - l) / 2;

        double h = calc(mid, x, y);

        if (h <= c)
        {
            r = mid - d;
        }
        else
        {
            l = mid + d;
            ans = mid;
        }
    }

    cout << "Case " << caseno << ": " << ans << endl;
}

int main()
{
    optimize();
    fraction();
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        program(i);
    return 0;
}