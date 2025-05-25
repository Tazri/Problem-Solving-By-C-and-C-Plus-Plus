// link : https://www.codechef.com/problems/EXPSTP
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

int d(int a, int b)
{
    return a > b ? a - b : b - a;
}

int mnDistanceFromOut(int x, int y, int n)
{
    int xto1 = d(x, 1);
    int xton = d(x, n);
    int yto1 = d(y, 1);
    int yton = d(y, n);
    int mn = min(xto1, min(xton, min(yto1, yton)));
    return mn;
}

void program()
{
    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    int a1 = d(x1, x2) + d(y1, y2);

    int mnToOut = mnDistanceFromOut(x1, y1, n);
    int mnToReach = mnDistanceFromOut(x2, y2, n);

    int a2 = mnToOut + mnToReach + 2;

    int ans = min(a1, a2);
    cout << ans << endl;
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