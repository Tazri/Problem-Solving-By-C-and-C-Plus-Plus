// link : https://cses.fi/problemset/task/1085
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

ll n, k;
vector<ll> arr;

bool isPossible(ll x)
{
    ll cnt = 0;
    ll sum = 0;
    for (ll ai : arr)
    {
        if (ai > x)
            return false;

        if (sum + ai > x)
        {
            cnt++;
            sum = ai;
        }
        else
        {
            sum += ai;
        }
    }
    cnt++;

    if (cnt <= k)
        return true;
    return false;
}

void program()
{
    cin >> n >> k;
    arr = vector<ll>(n);

    ll sum = 0;

    for (ll &ai : arr)
    {
        cin >> ai;
        sum += ai;
    }

    ll l = 1;
    ll r = sum;
    ll ans = -1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;

        if (isPossible(mid))
        {
            r = mid - 1;
            ans = mid;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    program();
    return 0;
}