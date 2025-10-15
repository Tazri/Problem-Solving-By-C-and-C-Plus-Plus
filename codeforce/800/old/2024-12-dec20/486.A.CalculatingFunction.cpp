// link : https://codeforces.com/problemset/problem/486/A
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

int main()
{
    optimize();
    ll n;

    cin >> n;

    ll e = n / 2;
    ll o = ceil((n * 1.0) / 2);
    ll sum = (e * (e + 1)) - (o * o);

    cout << sum << endl;
    return 0;
}