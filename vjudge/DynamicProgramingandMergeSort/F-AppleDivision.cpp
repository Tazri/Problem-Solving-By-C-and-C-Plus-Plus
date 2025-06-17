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

vector<ll> arr;
ll n;
ll g1 = 0;
ll g2 = 0;
ll mn = 0;

void solve(ll i)
{
    if (i >= n)
    {
        ll d = g1 > g2 ? g1 - g2 : g2 - g1;
        mn = min(mn, d);
        return;
    }

    g1 += arr[i];
    solve(i + 1);
    g1 -= arr[i];
    g2 += arr[i];
    solve(i + 1);
    g2 -= arr[i];
}

void program()
{
    cin >> n;
    arr = vector<ll>(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        mn += arr[i];
    }
    solve(0);
    cout << mn << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}