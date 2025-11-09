// link : https://codeforces.com/problemset/problem/1837/A
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
    int x, k;
    cin >> x >> k;

    if (x % k != 0)
    {
        cout << 1 << endl;
        cout << x << endl;
        return;
    }

    if (x == k)
    {
        cout << 2 << endl;
        cout << k - 1 << " " << 1 << endl;
        return;
    }

    cout << 2 << endl;
    cout << k - 1 << " " << x - (k - 1) << endl;
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