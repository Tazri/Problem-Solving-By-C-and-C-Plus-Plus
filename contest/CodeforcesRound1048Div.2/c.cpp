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

ll pow(ll n)
{
    ll ans = 1;

    for (ll i = 0; i < n; i++)
        ans *= 2;

    return ans;
}

void program()
{
    ll k, x;
    cin >> k >> x;
    vector<ll> ans;
    ans.reserve(120);
    ll eq = pow(k);
    ll limit = eq + eq;

    ll right = x;
    ll left = limit - right;

    while (right != eq && left != eq)
    {
        if (right * 2 < limit)
        {
            right *= 2;
            left = limit - right;
            ans.push_back(1);
            continue;
        }

        left *= 2;
        right = limit - left;
        ans.push_back(2);
    }

    cout << ans.size() << endl;
    if (ans.size() == 0)
    {
        cout << endl;
        return;
    }

    reverse(ans.begin(), ans.end());
    for (ll i = 0; i < ans.size(); i++)
        cout << ans[i] << " \n"[i == ans.size() - 1];
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