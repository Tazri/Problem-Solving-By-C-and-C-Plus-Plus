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
    ll n, c;
    cin >> n >> c;
    vector<ll> arr;
    arr.reserve(n);
    ll extra = 0;
    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;

        if (ai > c)
            extra++;
        else
            arr.push_back(ai);
    }

    sort(arr.begin(), arr.end(), greater<ll>());

    ll m = 1;
    ll ans = 0;
    ll li = n - 1;

    for (ll i = 0; i < arr.size(); i++)
    {
        if (m > c || arr[i] > c || arr[i] * m > c)
        {
            ans++;
        }
        else
        {
            m *= 2;
        }
    }

    cout << ans + extra << endl;
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