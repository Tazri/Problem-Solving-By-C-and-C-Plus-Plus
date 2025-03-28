// link : https://codeforces.com/problemset/problem/1968/C
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
    vector<ll> arr(n, 0);

    for (ll i = 1; i < n; i++)
        cin >> arr[i];

    // create arr
    arr[0] = arr[1] + 1;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            continue;

        ll base = arr[i] + arr[i - 1];
        ll left = arr[i - 2] - (base % arr[i - 2]);
        arr[i - 1] += base + left;
    }

    // print
    cout << arr[0];
    for (int i = 1; i < n; i++)
        cout << " " << arr[i];
    cout << endl;
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