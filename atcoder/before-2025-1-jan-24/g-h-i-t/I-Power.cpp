// link : https://atcoder.jp/contests/abc283/tasks/abc283_a?lang=en
#include <bits/stdc++.h>

using namespace std;
typedef double dl;

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

int main()
{
    optimize();
    int a, b;
    cin >> a >> b;
    int ans = 1;

    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }

    cout << ans << endl;
    return 0;
}