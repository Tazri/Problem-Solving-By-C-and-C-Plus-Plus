// link : https://atcoder.jp/contests/abc318/tasks/abc318_c?lang=en
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
    ll n, d, p;

    cin >> n >> d >> p;

    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end(), [](ll a, ll b)
         { return a > b; });

    ll cost = 0;
    ll i = 0;
    while (i < n)
    {
        ll sum = 0;
        for (ll j = i; j < (i + d) && j < n; j++)
        {
            sum += arr[j];
        }

        if (sum > p)
        {
            cost += p;
            i += d;
            continue;
        }
        break;
    }

    if (i < n)
    {
        for (int j = i; j < n; j++)
            cost += arr[j];
    }

    cout << cost << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}