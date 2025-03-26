// link : https://codeforces.com/problemset/problem/1954/A
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
    int n, m, k;
    cin >> n >> m >> k;

    if (n == 1 || m == 1)
    {
        cout << "NO" << endl;
        return;
    }

    if (k >= n)
    {
        cout << "NO" << endl;
        return;
    }

    int major = ceil((n * 1.0) / (m * 1.0));
    int minor = n - major;

    if (minor <= k)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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