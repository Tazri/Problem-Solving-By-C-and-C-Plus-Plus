// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J
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

ll fact(ll n)
{
    if (n <= 0)
        return 1;
    return n * fact(n - 1);
}

void program()
{
    ll n;
    cin >> n;
    cout << fact(n) << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}