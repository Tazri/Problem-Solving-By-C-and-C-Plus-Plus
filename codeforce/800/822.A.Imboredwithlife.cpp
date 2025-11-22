// link : https://codeforces.com/contest/822/problem/A
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    ll a, b;
    cin >> a >> b;
    ll mn = min(a, b);

    ll ans = 1;

    for (int i = 1; i <= mn; i++)
        ans *= i;

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}