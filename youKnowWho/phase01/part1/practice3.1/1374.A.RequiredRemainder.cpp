// link : https://codeforces.com/contest/1374/problem/A
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
    int x, y, n;
    cin >> x >> y >> n;

    int d = n / x;
    int ans1 = ((d * x) + y);
    if (n % x == y)
    {
        cout << n << endl;
        return;
    }
    if (ans1 <= n)
    {
        cout << ans1 << endl;
        return;
    }
    d -= 1;
    cout << (d * x) + y << endl;
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