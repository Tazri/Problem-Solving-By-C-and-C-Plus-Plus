// link : https://atcoder.jp/contests/abc205/tasks/abc205_a?lang=en
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
    double a, b;
    cin >> a >> b;

    double ans = (a * b) / 100.0;

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}