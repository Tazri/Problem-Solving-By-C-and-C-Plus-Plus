// link : https://codeforces.com/problemset/problem/2024/A
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

    int a, b;
    cin >> a >> b;
    if (a >= b)
    {
        cout << a << endl;
        return;
    }

    int diff = b - a;
    if ((2 * diff) >= b)
    {
        cout << 0 << endl;
        return;
    }

    cout << a - diff << endl;
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