// link : https://codeforces.com/problemset/problem/1334/B
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
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);

    ll wealth = 0;
    ll extra = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] >= x)
        {
            wealth++;
            extra += (arr[i] - x);
            arr[i] = x;
        }
    }

    if (extra == 0)
    {
        cout << wealth << endl;
        return;
    }

    // sort
    sort(arr.begin(), arr.end(), [](ll a, ll b)
         { return a > b; });

    for (ll w : arr)
    {
        if (w >= x)
            continue;
        ll need = x - w;

        if (extra >= need)
        {
            extra -= need;
            wealth++;
        }
    }

    cout << wealth << endl;
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