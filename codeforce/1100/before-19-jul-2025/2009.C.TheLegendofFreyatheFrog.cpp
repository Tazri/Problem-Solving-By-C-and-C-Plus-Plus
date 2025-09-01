// link : https://codeforces.com/problemset/problem/2009/C
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

void program()
{
    int x, y, k;

    cin >> x >> y >> k;

    int jx = (x + k - 1) / k;
    int jy = (y + k - 1) / k;

    int mn = min(jx, jy);
    int jump = mn * 2;

    jx -= mn;
    jy -= mn;

    if (jx == 0 && jy > 0)
    {
        jump += (jy * 2);
    }

    if (jy == 0 && jx > 0)
    {
        jump++;
        jx--;
        jump += (jx * 2);
    }

    cout << jump << endl;
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