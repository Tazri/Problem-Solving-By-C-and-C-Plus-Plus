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

typedef struct
    element
{
    ll mn = 0;
    ll mx = 0;
} el;

el takePair()
{
    el e;
    ll n;
    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;

        if (e.mn <= 0)
        {
            e.mn = ai;
            continue;
        }

        if (ai <= e.mn)
        {
            e.mx = e.mn;
            e.mn = ai;
            continue;
        }

        if (e.mx <= 0)
        {
            e.mx = ai;
            continue;
        }

        if (ai <= e.mx)
        {
            e.mx = ai;
        }
    }

    return e;
}

void program()
{
    ll n;
    cin >> n;
    vector<el> arr(n);

    for (ll i = 0; i < n; i++)
        arr[i] = takePair();

    ll mn = arr[0].mn;
    ll mxi = 0;

    for (ll i = 0; i < n; i++)
    {
        mn = min(mn, arr[i].mn);

        if (arr[i].mx < arr[mxi].mx)
        {
            mxi = i;
        }
    }

    ll ans = mn;

    for (ll i = 0; i < n; i++)
    {
        if (i == mxi)
            continue;
        ans += arr[i].mx;
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