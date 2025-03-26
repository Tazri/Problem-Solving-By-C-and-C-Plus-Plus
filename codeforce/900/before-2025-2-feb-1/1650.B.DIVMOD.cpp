// link : https://codeforces.com/problemset/problem/1650/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void test()
{
    int l, r, a;
    cin >> l >> r >> a;

    int rma = r % a;
    int mxM = r - rma - 1;

    if (mxM < l)
    {
        int ans = r / a;
        ans += rma;
        cout << ans << endl;
        return;
    }
    int r1 = (mxM / a) + (mxM % a);
    int r2 = (r / a) + rma;
    int ans = max(r1, r2);

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