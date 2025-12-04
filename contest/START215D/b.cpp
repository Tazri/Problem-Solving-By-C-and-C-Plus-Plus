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
    ll r, g, b;
    cin >> r >> g >> b;

    ll mn = min({r, g, b});
    ll ans = mn * 10;
    r -= mn;
    g -= mn;
    b -= mn;
    ll ex = r + g + b;
    ans += (ex * 3);
    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}