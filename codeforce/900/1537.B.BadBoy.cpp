// link : https://codeforces.com/problemset/problem/1537/B
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
    int i, j;
    Point() {};
    Point(int a, int b)
    {
        this->i = a;
        this->j = b;
    }
};

Point getLong(int n, int m, Point a)
{
    vector<Point> c;

    c.push_back(Point(n, m));
    c.push_back(Point(1, 1));
    c.push_back(Point(n, 1));
    c.push_back(Point(1, m));

    int mx = -1;
    Point ans;
    for (Point ci : c)
    {
        int dist = abs(ci.i - a.i) + abs(ci.j - a.j);

        if (mx == -1)
        {
            mx = dist;
            ans = ci;
        }

        if (dist > mx)
        {
            mx = dist;
            ans = ci;
        }
    }

    return ans;
}

void program()
{
    int n, m;
    Point a;
    cin >> n >> m >> a.i >> a.j;

    Point p1, p2;

    p1 = getLong(n, m, a);
    p2 = getLong(n, m, p1);

    cout << p1.i << " " << p1.j << " " << p2.i << " " << p2.j << endl;
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