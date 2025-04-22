// link : https://atcoder.jp/contests/abc202/tasks/abc202_a?lang=en
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
    int a, b, c;
    cin >> a >> b >> c;

    int ans = (7 - a) + (7 - b) + (7 - c);
    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}