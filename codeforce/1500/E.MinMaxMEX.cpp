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

bool isPossible(vector<ll> &v, ll k, ll mx)
{
    ll n = v.size();

    set<ll> st;
    ll cnt = 0;
    for (ll &vi : v)
    {

        if (vi > mx)
            continue;

        if (vi <= mx)
        {
            if (st.count(vi))
                continue;
            st.insert(vi);
        }

        if (st.size() == mx + 1)
        {
            cnt++;
            st.clear();
        }
    }

    return cnt >= k;
}

void program()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
        cin >> v[i];

    if (k == 1)
    {
        vector<bool> has(n, false);

        for (ll vi : v)
        {
            if (vi < n)
                has[vi] = true;
        }

        for (int i = 0; i < n; i++)
            if (!has[i])
            {
                cout << i << endl;
                return;
            }

        cout << n << endl;
        return;
    }

    ll ans = -1;

    int left = 0;
    int right = n;

    while (left <= right)
    {
        int mid = left + ((right - left) / 2);

        if (isPossible(v, k, mid))
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    cout << ans + 1 << endl;
}

int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
        program();
    return 0;
}