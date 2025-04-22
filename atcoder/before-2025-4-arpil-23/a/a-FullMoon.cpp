// link : https://atcoder.jp/contests/abc318/tasks/abc318_a?lang=en
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
    int n, m, p;
    cin >> n >> m >> p;

    if (n < m)
    {
        cout << 0 << endl;
        return;
    }

    int k = n - m + p;
    int ans = k / p;

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}