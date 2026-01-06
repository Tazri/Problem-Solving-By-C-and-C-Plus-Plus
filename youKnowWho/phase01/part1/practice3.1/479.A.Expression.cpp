// link : https://codeforces.com/problemset/problem/479/A
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
    ll a, b, c;
    cin >> a >> b >> c;
    ll n1 = a * b * c;
    ll n2 = a + b + c;
    ll n3 = (a + b) * c;
    ll n4 = a * (b + c);
    ll n5 = a + b * c;
    ll n6 = a * b + c;

    ll ans = max(n1, n2);
    ans = max(ans, max(n3, n4));
    ans = max(ans, max(n5, n6));

    cout << ans << endl;
}

int main()
{
    optimize();

    program();

    return 0;
}