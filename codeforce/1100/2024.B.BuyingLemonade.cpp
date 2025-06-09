// link : https://codeforces.com/problemset/problem/2024/B
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
    vector<ll> arr;
    arr.reserve(n);
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;

        if (mp.count(ai))
        {
            mp[ai]++;
        }
        else
        {
            arr.push_back(ai);
            mp[ai]++;
        }
    }

    // sort
    sort(arr.begin(), arr.end());

    ll prev = 0;
    ll press = 0;
    ll done = 0;
    ll take = 0;
    ll left = n;

    for (int ai : arr)
    {
        if (take >= k)
            break;

        ll mn = ai - prev;
        prev += mn;

        // add done
        ll can = left * mn;

        if (take + can > k)
        {
            int d = k - take;
            take += d;
            press += d;

            continue;
        }

        take += can;
        press += can;

        if (take >= k)
            break;
        press += mp[ai];
        left -= mp[ai];
    }

    cout << press << endl;
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