// link : https://codeforces.com/problemset/problem/1955/A
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
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;

    if (n & 1)
    {
        ans += a;
        n--;
    }

    int a2 = a + a;
    int can = n / 2;

    if (a2 < b)
    {
        ans += (can * a2);
    }
    else
    {
        ans += (can * b);
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