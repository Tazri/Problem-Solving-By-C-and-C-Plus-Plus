// link : https://atcoder.jp/contests/abc148/tasks/abc148_a?lang=en
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
    int a, b;
    cin >> a >> b;
    int ans = 6 - a - b;
    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}