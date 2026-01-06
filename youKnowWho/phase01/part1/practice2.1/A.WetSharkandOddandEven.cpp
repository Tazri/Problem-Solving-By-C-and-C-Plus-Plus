// link: https://codeforces.com/problemset/problem/621/A
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

    ll odd = -1;
    ll sum = 0;
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        ll vi;
        cin >> vi;
        sum += vi;
        if (vi & 1)
        {
            cnt++;
            if (odd == -1)
                odd = vi;
            odd = min(odd, vi);
        }
    }

    if (sum & 1)
        cout << sum - odd << endl;
    else
        cout << sum << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}