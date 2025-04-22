// link : https://atcoder.jp/contests/abc305/tasks/abc305_a
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
    int n;
    cin >> n;

    if (n % 5 == 0)
    {
        cout << n << endl;
        return;
    }

    int r = n % 5;
    int a1 = n + (5 - r);
    int a2 = n - r;

    int d1 = a1 - n;
    int d2 = n - a2;

    if (d1 < d2)
        cout << a1 << endl;
    else
        cout << a2 << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}