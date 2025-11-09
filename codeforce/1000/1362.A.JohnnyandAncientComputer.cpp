// link : https://codeforces.com/problemset/problem/1362/A
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
    ll a, b;
    cin >> a >> b;

    ll cntA = 0;
    ll cntB = 0;

    while (a % 2 == 0)
    {
        a /= 2;
        cntA++;
    }

    while (b % 2 == 0)
    {
        b /= 2;
        cntB++;
    }

    if (a != b)
    {
        cout << -1 << endl;
        return;
    }

    ll diff = abs(cntA - cntB);

    ll ans = diff / 3;
    diff %= 3;
    ans += (diff / 2);
    diff %= 2;
    ans += diff;
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