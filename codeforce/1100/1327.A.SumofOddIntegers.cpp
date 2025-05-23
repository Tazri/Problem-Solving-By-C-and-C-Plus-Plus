// link : https://codeforces.com/problemset/problem/1327/A
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

    if ((n & 1) != (k & 1))
    {
        cout << "NO" << endl;
        return;
    }

    ll sum = k * k;

    if (sum > n)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    while (t--)
        program();
    return 0;
}