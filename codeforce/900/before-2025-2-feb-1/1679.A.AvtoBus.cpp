// link : https://codeforces.com/problemset/problem/1679/A
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

void test()
{
    ll n;
    cin >> n;

    if (n < 4 || n & 1)
    {
        cout << -1 << endl;
        return;
    }

    ll mx = n / 4;
    ll mn = n / 6;

    if (n % 6)
        mn++;

    cout << mn << " " << mx << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        test();
    return 0;
}