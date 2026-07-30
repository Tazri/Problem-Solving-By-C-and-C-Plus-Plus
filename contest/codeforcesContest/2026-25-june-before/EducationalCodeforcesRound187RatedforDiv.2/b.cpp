#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef double dl;
#define endl '\n'

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield)

ll f(ll n, vector<ll> &v)
{
    ll sum = 0;
    while (n)
    {
        ll d = n % 10;
        v.push_back(d);
        sum += (n % 10);
        n /= 10;
    }
    reverse(v.begin(), v.end());
    v[0]--;
    sort(v.begin(), v.end(), [](ll a, ll b)
         { return a > b; });
    return sum;
}

void program()
{
    ll n;
    cin >> n;
    vector<ll> v;
    ll sum = f(n, v);

    ll ans = 0;

    for (int i = 0; i < (int)v.size(); i++)
    {
        if (sum < 10)
        {
            break;
        }

        sum -= v[i];
        ans++;
    }

    cout << ans << endl;
}

int32_t main()
{
    optimize();

    int t = 1;
    cin >> t;
    while (t--)
        program();
    return 0;
}