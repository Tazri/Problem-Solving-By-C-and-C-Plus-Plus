// link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P
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

ll lg2(ll n)
{
    if (n < 2)
        return 0;
    return 1 + lg2(n / 2);
}

void program()
{
    ll n;
    cin >> n;
    cout << lg2(n) << endl;
}

int32_t main()
{
    optimize();
    program();
    return 0;
}