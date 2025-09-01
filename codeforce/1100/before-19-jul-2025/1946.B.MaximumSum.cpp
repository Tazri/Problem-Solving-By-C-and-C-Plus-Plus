// link : https://codeforces.com/problemset/problem/1946/B
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

ll mod = 1000000007;

ll getMod(ll v, ll mod)
{
    return ((v % mod) + mod) % mod;
}

void getInputs(vector<ll> &arr, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;
        if (arr.empty())
        {
            arr.push_back(ai);
            continue;
        }

        if (ai < 0 && arr.back() < 0)
            arr.back() += ai;

        else if (ai >= 0 && arr.back() >= 0)
            arr.back() += ai;
        else
            arr.push_back(ai);
    }
}

void program()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> arr;
    arr.reserve(n);

    getInputs(arr, n);

    ll mx = 0LL;
    ll sum = 0LL;
    ll curr = 0LL;

    for (ll ai : arr)
    {
        sum += ai;
        curr = max(curr + ai, 0LL);
        mx = max(curr, mx);
    }

    ll p = 1LL;
    for (ll i = 0LL; i < k; i++)
    {
        p *= 2;
        p = getMod(p, mod);
    }

    sum -= mx;
    sum = getMod(sum, mod);
    mx = getMod(mx, mod);
    mx *= p;
    mx = getMod(mx, mod);
    sum += mx;
    sum = getMod(sum, mod);

    cout << sum << endl;
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