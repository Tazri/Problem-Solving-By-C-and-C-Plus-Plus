// link : https://codeforces.com/problemset/problem/2026/A
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
    int x, y, k;
    cin >> x >> y >> k;

    x = min(x, y);

    cout << "0 0 " << x << " " << x << endl;
    cout << "0 " << x << " " << x << " 0" << endl;
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