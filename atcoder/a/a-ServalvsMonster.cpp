// link : https://atcoder.jp/contests/abc153/tasks/abc153_a?lang=en
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
    int h, a;
    cin >> h >> a;

    int ans = (h + a - 1) / a;

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}