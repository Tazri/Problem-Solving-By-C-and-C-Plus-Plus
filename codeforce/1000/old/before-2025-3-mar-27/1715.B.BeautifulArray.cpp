// link : https://codeforces.com/problemset/problem/1715/B
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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    ll kb = k * b;

    if (kb > s)
    {
        cout << -1 << endl;
        return;
    }

    ll extra = s - kb;

    ll eh = (extra + n - 1) / n; // each highest
    ll mod = extra % n;
    ll e = extra / n;

    if (eh >= k)
    {
        cout << -1 << endl;
        return;
    }

    vector<ll> arr(n, 0);
    arr[n - 1] = kb;

    for (ll i = 0; i < n; i++)
        arr[i] += e;

    for (ll i = 0; i < mod; i++)
        arr[i]++;

    // print answer
    cout << arr[0];
    for (ll i = 1; i < n; i++)
        cout << " " << arr[i];
    cout << endl;
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