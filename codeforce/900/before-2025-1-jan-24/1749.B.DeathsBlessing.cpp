// link : https://codeforces.com/problemset/problem/1749/B
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
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        sum += tmp;
    }

    ll mx = 0;

    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin >> tmp;
        sum += tmp;
        mx = max(mx, tmp);
    }
    sum -= mx;
    cout << sum << endl;
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