// link : https://codeforces.com/problemset/problem/2111/C
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
    vector<ll> arr;
    vector<ll> cnts;
    arr.reserve(n);
    arr.reserve(n);

    for (ll i = 0; i < n; i++)
    {
        ll ai;
        cin >> ai;

        if (arr.empty())
        {
            arr.push_back(ai);
            cnts.push_back(1);
            continue;
        }

        if (arr.back() != ai)
        {
            arr.push_back(ai);
            cnts.push_back(1);
        }
        else
        {
            cnts.back()++;
        }
    }

    ll sz = arr.size();

    // for (int i = 0; i < sz; i++)
    //     cout << arr[i] << "(" << cnts[i] << ")" << " ";
    // cout << endl;

    ll op = -1;
    ll left = 0;
    for (ll i = 0; i < sz; i++)
    {
        ll right = n - left - cnts[i];
        ll cost = right * arr[i] + left * arr[i];

        if (op < 0)
            op = cost;
        else
            op = min(cost, op);

        left += cnts[i];
    }

    cout << op << endl;
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