// link : https://atcoder.jp/contests/abc193/tasks/abc193_a
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
    cout.precision(18);           \
    cout.setf(ios::fixed, ios::floatfield)

void program()
{
    double a, b;
    cin >> a >> b;
    double ans = (100.0 * (a - b)) / a;
    cout << ans << endl;
}

int main()
{
    optimize();
    fraction();
    program();
    return 0;
}