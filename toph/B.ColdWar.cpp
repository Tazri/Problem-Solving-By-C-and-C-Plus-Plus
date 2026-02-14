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

struct Point
{
    ll x, y;
    ll u = 0, d = 0, l = 0, r = 0;
    string s;
    ll upperX, upperY, lowerX, lowerY;

    void cal()
    {
        for (char ch : s)
        {
            if (ch == 'U')
                u++;
            else if (ch == 'D')
                d++;
            else if (ch == 'L')
                l++;
            else if (ch == 'R')
                r++;
        }

        upperX = x + r;
        lowerX = x - l;
        upperY = y + u;
        lowerY = y - d;
    }

    bool isIntersect(Point p)
    {
        return (max(lowerX, p.lowerX) <= min(upperX, p.upperX)) && (max(lowerY, p.lowerY) <= min(upperY, p.upperY));
    }
};

void program()
{
    Point p1, p2;
    cin >> p1.x >> p1.y >> p2.x >> p2.y;

    cin >> p1.s;
    cin >> p2.s;

    p1.cal();
    p2.cal();

    if (p1.isIntersect(p2))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return;
}

int32_t main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}