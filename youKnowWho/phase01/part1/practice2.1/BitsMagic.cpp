// link : https://www.codechef.com/problems/BITMAGIC
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
    ll n, k;
    cin >> n >> k;

    n = n | (1L << k);
    cout << n << endl;
}

int32_t main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}