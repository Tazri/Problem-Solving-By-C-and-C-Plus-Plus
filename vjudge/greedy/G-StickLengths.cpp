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
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    ll mid = n & 1 ? n / 2 : (n / 2) - 1;

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        int d = arr[i] > arr[mid] ? arr[i] - arr[mid] : arr[mid] - arr[i];
        ans += d;
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}