// link : https://codeforces.com/problemset/problem/1765/M
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

    if (n % 2 == 0)
    {
        int hlf = n / 2;
        cout << hlf << " " << hlf << endl;
        return;
    }

    ll rt = sqrt(n);

    ll mx = 1;
    for (ll i = 3; i <= rt; i += 2)
    {
        if (n % i == 0)
        {
            ll r = n / i;
            mx = max(mx, max(i, r));
            break;
        }
    }

    cout << mx << " " << n - mx << endl;
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