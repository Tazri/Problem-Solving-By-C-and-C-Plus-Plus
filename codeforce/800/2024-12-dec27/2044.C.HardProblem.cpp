// link : https://codeforces.com/problemset/problem/2044/C
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

void test()
{
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int l = m;
    int r = m;

    int taken = 0;
    if (l <= a)
    {
        taken += l;
        l = 0;
    }
    else
    {
        l -= a;
        taken += a;
    }

    if (r <= b)
    {
        taken += r;
        r = 0;
    }
    else
    {
        r -= b;
        taken += b;
    }

    int left = l + r;

    if (left >= c)
    {
        taken += c;
    }
    else
    {
        taken += left;
    }

    cout << taken << endl;
    ;
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