// link : https://codeforces.com/contest/318/problem/A
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
#define int ll
void program()
{
    int l, n;
    cin >> l >> n;

    int half = (l + 1) / 2;

    if (n <= half)
    {
        cout << 2 * n - 1 << endl;
    }
    else
    {
        cout << 2 * (n - half) << endl;
    }
}

int32_t main()
{
    optimize();
    program();
    return 0;
}