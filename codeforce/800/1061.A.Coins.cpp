// link : https://codeforces.com/problemset/problem/1061/A
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
    int s, n;
    cin >> n >> s;
    int ans = (s + n - 1) / n;

    cout << ans << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}