// link : https://codeforces.com/problemset/problem/2032/B
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
    int n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << endl;
        return;
    }

    if (k == 1 || k == n)
    {
        cout << -1 << endl;
        return;
    }

    if ((k - 1) & 1)
    {
        cout << 3 << endl;
        cout << 1 << " " << k << " " << k + 1 << endl;
        return;
    }

    cout << 3 << endl;
    cout << 1 << " " << k - 1 << " " << k + 2 << endl;
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