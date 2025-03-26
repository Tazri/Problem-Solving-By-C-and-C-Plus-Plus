// link : https://codeforces.com/problemset/problem/1988/A
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
    int n, k;
    cin >> n >> k;

    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }

    if (k >= n)
    {
        cout << 1 << endl;
        return;
    }

    int left = n - k;
    int ans = ceil((left * 1.0) / ((k - 1) * 1.0));
    ans++;
    cout << ans << endl;
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
// 772 295 -> 3