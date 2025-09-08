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
    ll x;
    ll y;
    Point()
    {
        cin >> x;
        cin >> y;
    }
};

void program()
{
    Point p1, p2, p3;

    ll cond = ((p3.x - p2.x) * (p2.y - p1.y)) - ((p2.x - p1.x) * (p3.y - p2.y));

    if (cond < 0)
        cout << "LEFT" << endl;
    else if (cond > 0)
        cout << "RIGHT" << endl;
    else
        cout << "TOUCH" << endl;
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