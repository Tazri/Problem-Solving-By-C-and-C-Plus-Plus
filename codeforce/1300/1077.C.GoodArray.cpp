// link : https://codeforces.com/problemset/problem/1077/C
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

int main()
{
    optimize();
    ll n;
    cin >> n;
    vector<ll> arr(n);
    unordered_map<ll, ll> block;
    unordered_map<ll, ll> count;
    ll sum = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];

        if (count.count(arr[i]))
        {
            count[arr[i]]++;
        }
        else
        {
            count[arr[i]] = 1;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        ll diff = sum - arr[i];
        ll el = diff - arr[i];

        block[el] = arr[i];
    }

    vector<ll> ans;

    for (ll i = 0; i < n; i++)
    {
        if (block.count(arr[i]))
        {
            ll sumFor = block[arr[i]];
            if (sumFor == arr[i])
            {
                if (count[arr[i]] > 1)
                {
                    ans.push_back(i + 1);
                }
            }
            else
            {
                ans.push_back(i + 1);
            }
        }
    }

    // printing
    ll size = ans.size();
    cout << size << endl;
    if (size)
    {
        cout << ans[0];
    }
    for (ll i = 1; i < size; i++)
    {
        cout << " " << ans[i];
    }
    if (size)
    {
        cout << endl;
    }
    return 0;
}