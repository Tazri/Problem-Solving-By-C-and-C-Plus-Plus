// link : https://codeforces.com/problemset/problem/2067/C

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

bool hasSeven(ll num)
{
    bool hasSeven = false;

    while (num)
    {
        ll l = num % 10;
        if (l == 7)
        {
            hasSeven = true;
            break;
        }

        num /= 10;
    }

    return hasSeven;
}

void program()
{
    ll n;
    cin >> n;

    ll ln = 1e9;
    ll ans = 10;

    for (ll i = 9; i <= ln; i = (i * 10) + 9)
    {
        ll cnt = 0;
        ll num = n;
        while (!hasSeven(num))
        {
            cnt++;
            num += i;
        }

        if (cnt == 0)
        {
            ans = 0;
            break;
        }

        ans = min(ans, cnt);
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}