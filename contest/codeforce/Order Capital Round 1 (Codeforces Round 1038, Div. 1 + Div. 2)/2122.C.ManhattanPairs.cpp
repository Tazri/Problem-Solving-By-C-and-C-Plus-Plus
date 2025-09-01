// link : https://codeforces.com/contest/2122/problem/C
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
    int x, y, man, i;
    int cx, cy;
};

void program()
{
    int n;
    cin >> n;
    vector<Point> p(n);
    int mn = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].x >> p[i].y;
        p[i].i = i;

        mn = i == 0 ? min(p[i].x, p[i].y) : min(mn, min(p[i].x, p[i].y));
    }

     for (int i = 0; i < n; i++)
        p[i].man = p[i].x + p[i].y;

    sort(p.begin(), p.end(), [](Point left, Point right)
         { return left.man < right.man; });

    int l = 0;
    int r = n - 1;
    int sum = 0;
    while (l < r)
    {
        cout << p[l].i + 1 << " " << p[r].i + 1 << endl;

        int dis = abs(p[l].x - p[r].x) + abs(p[l].y - p[r].y);
        sum += dis;
        l++;
        r--;
    }

    cout << "sum : " << sum << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}