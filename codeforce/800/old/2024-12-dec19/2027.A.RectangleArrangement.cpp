// link : https://codeforces.com/problemset/problem/2027/A
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
    int n;
    cin >> n;
    int u, h;
    int maxU, maxH;
    cin >> maxU >> maxH;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> u >> h;
        maxU = max(maxU, u);
        maxH = max(maxH, h);
    }

    cout << (2 * (maxU + maxH)) << endl;
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