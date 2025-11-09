// link : https://codeforces.com/problemset/problem/459/A
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
    int x;
    int y;
    Point()
    {
        cin >> x >> y;
    }
};

void program()
{
    Point p1, p2;

    if (p1.x == p2.x)
    {
        int d = abs(p1.y - p2.y);

        cout << p1.x + d << " " << p1.y << " " << p2.x + d << " " << p2.y << endl;
        return;
    }

    if (p1.y == p2.y)
    {
        int d = abs(p1.x - p2.x);
        cout << p1.x << " " << p1.y + d << " " << p2.x << " " << p2.y + d << endl;
        return;
    }

    int xd = abs(p1.x - p2.x);
    int yd = abs(p1.y - p2.y);

    if (xd != yd)
    {
        cout << -1 << endl;
        return;
    }

    cout << p1.x << " " << p2.y << " " << p2.x << " " << p1.y << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}