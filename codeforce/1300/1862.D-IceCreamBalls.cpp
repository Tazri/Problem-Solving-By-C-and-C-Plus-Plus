// link : https://codeforces.com/problemset/problem/1862/D
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
    ll n;
    cin >> n;

    ll left = 1;
    ll right = 2e9;
    ll ball = 0;

    while (right > left + 1)
    {
        ll mid = left + (right - left) / 2;

        ll can = mid * (mid - 1) / 2;

        if (can <= n)
        {
            ball = mid;
            left = mid;
        }
        else
        {
            right = mid;
        }
    }

    ll make = ball * (ball - 1) / 2;
    ll extra = n - make;
    ll ans = ball + extra;
    cout << ans << endl;
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