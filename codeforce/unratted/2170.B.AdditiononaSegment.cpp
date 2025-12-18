// link  : https://codeforces.com/contest/2170/problem/B
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl "\n"
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);

void program()
{
    ll c = 0;
    ll sum = 0;

    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        ll vi;
        cin >> vi;
        sum += vi;

        if (vi)
            c++;
    }

    for (ll i = c; i >= 1; i--)
        if (sum - i >= n - 1)
        {
            cout << i << endl;
            return;
        }
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