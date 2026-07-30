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
    vector<ll> arr(n);
    set<ll> st;
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll h = arr[k - 1];

    vector<ll> th;
    th.reserve(n);

    for (ll &ai : arr)
    {
        if (st.count(ai))
            continue;
        st.insert(ai);
        th.push_back(ai);
    }

    sort(th.begin(), th.end());

    ll pos = 0;

    // for (ll &ti : th)
    //     cout << ti << " ";
    // cout << endl;

    for (ll i = 0; i < th.size(); i++)
    {
        if (th[i] == h)
        {
            pos = i;
            break;
        }
    }

    if (pos == th.size() - 1)
    {
        cout << "YES" << endl;
        return;
    }

    // cout << pos << endl;

    ll level = 1;

    for (ll i = pos + 1; i < th.size(); i++)
    {
        ll diff = th[i] - th[i - 1];
        level += diff;

        if (level - 1 > th[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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