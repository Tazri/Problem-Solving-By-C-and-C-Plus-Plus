// link : https://codeforces.com/problemset/problem/1845/B
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

int dist(int a, int b)
{
    return a > b ? a - b : b - a;
}

int distance(int ax, int ay, int bx, int by)
{
    return dist(ax, bx) + dist(ay, by);
}

void test()
{
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    // if those thing in one line
    int ans = 0;
    if ((ax >= bx && ax >= cx) || (ax <= bx && ax <= cx))
    {
        int abx = dist(ax, bx);
        int acx = dist(ax, cx);
        ans += min(abx, acx);
    }

    if ((ay >= by && ay >= cy) || (ay <= by && ay <= cy))
    {
        int aby = dist(ay, by);
        int acy = dist(ay, cy);
        ans += min(aby, acy);
    }

    cout << ans + 1 << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}