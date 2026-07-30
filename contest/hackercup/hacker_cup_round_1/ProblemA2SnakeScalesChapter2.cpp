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

bool isReach(vector<ll> &v, ll l)
{
    ll n = v.size();
    set<ll> visited;
    visited.insert(n);
    visited.insert(-1);

    queue<ll> q;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] <= l)
        {
            q.push(i);
            visited.insert(i);
        }
    }

    while (!q.empty())
    {
        ll i = q.front();
        q.pop();

        ll li = i - 1;
        ll ri = i + 1;

        if (!visited.count(li))
        {
            ll d = abs(v[li] - v[i]);
            if (d <= l)
            {
                visited.insert(li);
                q.push(li);
            }
        }

        if (!visited.count(ri))
        {
            ll d = abs(v[ri] - v[i]);

            if (d <= l)
            {
                visited.insert(ri);
                q.push(ri);
            }
        }
    }

    visited.erase(n);
    visited.erase(-1);
    return visited.size() == n;
}

void program(ll cse)
{
    cout << "Case #" << cse << ": ";
    ll n;
    cin >> n;
    vector<ll> v(n);

    ll mx = 0;
    ll mn = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];

        if (i == 0)
        {
            mn = v[i];
            mx = v[i];
        }
        else
        {
            mn = min(v[i], mn);
            mx = max(v[i], mx);
        }
    }

    ll left = mn;
    ll right = mx;
    ll ans = -1;

    while (left <= right)
    {
        ll mid = left + (right - left) / 2;

        if (isReach(v, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    optimize();
    ll t;
    cin >> t;
    for (ll i = 1; i <= t; i++)
        program(i);
    return 0;
}