#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

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
    int n, m, d;
    cin >> n >> m >> d;

    int up = d / m;
    int per = up + 1;

    int ans = (n + per - 1) / per;
    cout << ans << endl;
}

int32_t main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}