// link : https://codeforces.com/contest/1389/problem/A
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
    int l, r;
    cin >> l >> r;

    int x = l;
    int y = x * 2;

    if (y > r)
    {
        cout << -1 << " " << -1 << endl;
        return;
    }

    cout << x << " " << y << endl;
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