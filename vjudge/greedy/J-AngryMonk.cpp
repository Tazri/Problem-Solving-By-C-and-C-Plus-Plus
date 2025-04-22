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
    ll n, k;
    cin >> n >> k;
    vector<int> arr(k);
    ll mx = 0;

    for (ll i = 0; i < k; i++)
    {
        cin >> arr[i];

        if (arr[mx] < arr[i])
            mx = i;
    }

    ll ans = 0;

    for (ll i = 0; i < k; i++)
    {
        if (i == mx)
            continue;

        ans += arr[i];
        ans += (arr[i] - 1);
    }

    cout << ans << endl;
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