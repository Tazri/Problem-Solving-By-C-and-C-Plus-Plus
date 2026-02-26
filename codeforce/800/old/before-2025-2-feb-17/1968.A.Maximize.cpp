// link : https://codeforces.com/contest/1968/problem/A

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    int x;
    cin >> x;

    int v = gcd(x, 1) + 1;
    int ans = 1;
    for (int y = 1; y < x; y++)
    {
        int vn = gcd(x, y) + y;

        if (vn > v)
        {
            ans = y;
            v = vn;
        }
    }

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