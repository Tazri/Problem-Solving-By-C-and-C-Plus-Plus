// link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E
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
    cout.precision(20);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    double c;
    cin >> c;

    double l = 0;
    double r = c;
    int time = 1000;
    double ans = c;
    while (time--)
    {
        double mid = l + (r - l) / 2.0;
        double eq = (mid * mid) + sqrt(mid);
        if (eq == c)
        {
            ans = mid;
            break;
        }

        if (c < eq)
        {
            r = mid;
            ans = mid;
        }
        else
        {
            l = mid;
            ans = mid;
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    fraction();
    program();
    return 0;
}