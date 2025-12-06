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

    ll mx = v[0];
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i == 0)
            mx = v[i];

        mx = max(mx, v[i]);
    }

    ll ans = -1;

    ll left = 0;
    ll right = mx;

    while (left <= right)
    {
        ll mid = left + (right - left) / 2;

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